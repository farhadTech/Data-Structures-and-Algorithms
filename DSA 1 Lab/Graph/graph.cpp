#include<iostream>
#include<queue>
#include<stack>
using namespace std;
#define white 0
#define grey 1
#define black 2
#define INF INT_MAX
class Graph{
    int nVertices;
    int **adjacencyMatrix;
    bool directed;
    int *dist;
    int *visited;
    int *parent;
public:
    Graph(int n,bool d);
    void addEdge(int u,int v);
    void display();
    bool isEdge(int u,int v);
    void BFS(int src);

    void DFS();
    void DFS_visit(int u);

    bool isConnected();
    int getDist(int src,int dest);
    void path(int src,int dest);
    void pathR(int src,int dest);
    void printPath(int v);
    ~Graph();

};
Graph::Graph(int n,bool dir){
    nVertices=n;
    directed=dir;
    adjacencyMatrix=new int*[nVertices];
    dist=new int[n];
    parent=new int[n];
    visited=new int[n];

    for(int i=0;i<nVertices;i++)
        adjacencyMatrix[i]=new int[nVertices];

    for(int i=0;i<nVertices;i++)
        for(int j=0;j<nVertices;j++)
            adjacencyMatrix[i][j]=0;
}


void Graph::addEdge(int u,int v){
    if(u<0 || v<0 || u>=nVertices || v>=nVertices) return;
    //add edge u to v
    adjacencyMatrix[u][v]=1;
    //for undirected graph add edge from v to u
    if( !directed ) adjacencyMatrix[v][u]=1;
}

bool Graph::isEdge(int u,int v){
    if(u<0 || v<0 || u>=nVertices || v>=nVertices) return false;
    if(adjacencyMatrix[u][v]==1) return true;
    return false;
}
void Graph::display(){
    cout<<"printing graph"<<endl;
    for(int i=0;i<nVertices;i++){
        cout<<i<<":";
        for(int j=0;j<nVertices;j++){
            if(isEdge(i,j))
                cout<<j<<"\t";
        }
        cout<<endl;
    }
}
void Graph::BFS(int src){
    //set all the vertices to white
    for(int i=0;i<nVertices;i++){
        visited[i]=white;
        dist[i]=INF;
    }
    dist[src]=0;
    queue<int> q;
    q.push(src);
    parent[src]=-1;
    visited[src]=grey;

    while( ! q.empty()){
        int u=q.front();
        q.pop();

        //discover the adjacent vertices of u

        for(int v=0;v<nVertices;v++){
            if(isEdge(u,v)){
                //v is adjacent vertex of u
                if(visited[v]==white){
                    q.push(v);
                    visited[v]=grey;
                    parent[v]=u;
                    dist[v]=dist[u]+1;
                }
            }
        }
        visited[u]=black;
    }

    cout<<"distance from source "<<src<<endl;
    for(int i=0;i<nVertices;i++){
        if(visited[i]==white) cout<<i<<":INF"<<endl;
        else cout<<i<<":"<<dist[i]<<endl;
    }
}
bool Graph::isConnected(){
    BFS(0);
    for(int i=0;i<nVertices;i++){
        if(visited[i]==white) return false;
    }
    return true;
}
int Graph::getDist(int src,int dest){
    BFS(src);
    return dist[dest];
}
void Graph::path(int src,int dest){
    BFS(src);
    if(visited[dest]==white){
        cout<<"No path exists"<<endl;
        return;
    }
    stack<int> s;
    s.push(dest);
    int d=dest;
    dest=parent[dest];
    while(dest!=-1){
        s.push(dest);
        dest=parent[dest];
    }
    cout<<"path between "<<src<<" and "<<d<<":";
    while(!s.empty()){
        int x=s.top();
        s.pop();
        cout<<x<<"-->";
    }
    cout<<endl;
}
void Graph::DFS_visit(int u){
    visited[u]=grey;
    for(int i=0;i<nVertices;i++){
        if(isEdge(u,v) && visited[v]==white){
            DFS_visit(v);
        }
    }
    visited[u]=black;

}
void Graph::DFS(){
    for(int i=0;i<nVertices;i++){
        visited[i]=white;
    }
    for(int i=0;i<nVertices;i++){
        if(visited[i]==white){
            DFS_visit(i);
        }
    }
}
Graph::~Graph(){
    for(int i=0;i<nVertices;i++)
        delete [] adjacencyMatrix[i];
    delete [] adjacencyMatrix;
}

int main(){
    Graph g(8,false);//undirected graph with 4 vertices
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(0,5);
    g.addEdge(1,4);
    g.addEdge(4,5);
    g.addEdge(2,5);
    g.addEdge(6,7);
    g.addEdge(3,7);
    g.addEdge(5,6);
    //g.display();
    //g.BFS(3);
    if(g.isConnected()){
        cout<<"The graph is connected"<<endl;
    }else{
        cout<<"The graph is not connected"<<endl;
    }
    g.path(2,3);
}





