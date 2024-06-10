#include<iostream>
using namespace std;

class Graph{
    int nVertices;
    int **adjacencyMatrix;
    bool directed;
public:
    Graph(int n,bool d);
    void addEdge(int u,int v);
    void display();
    bool isEdge(int u,int v);
    ~Graph();
     //implement the followings
    //int inDegree(int u);
    //int outDegree(int u) ;
};
Graph::Graph(int n,bool dir){
    nVertices=n;
    directed=dir;
    adjacencyMatrix=new int*[nVertices];

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

Graph::~Graph(){
    for(int i=0;i<nVertices;i++)
        delete [] adjacencyMatrix[i];
    delete [] adjacencyMatrix;
}

int main(){
    Graph g(4,false);//undirected graph with 4 vertices
    g.addEdge(0,1);
    g.addEdge(0,3);
    g.addEdge(1,3);
    g.addEdge(1,2);
    g.display();
}





