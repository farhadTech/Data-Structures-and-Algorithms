#include<iostream>
using namespace std;

struct node {
    int data;
    node *next;
};
node * createNewNode(int x){
    node *newnode=new node();
    newnode->data=x;
    newnode->next=nullptr;
    return newnode;
}
class Graph{
    int nVertices;
    node **adjacencyList;
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
    adjacencyList=new node*[n];
    for(int i=0;i<nVertices;i++)
        adjacencyList[i]=nullptr;
}

void Graph::addEdge(int u,int v){
    if(u<0 || v<0 || u>=nVertices || v>=nVertices) return;
    //adding v to the adjacent list of u(u,v)
    node *n1=createNewNode(v);
    n1->next=adjacencyList[u];
    adjacencyList[u]=n1;
    //if undirected ,adding u to the adjacent list of v(v,u)
    node *n2=createNewNode(u);
    n2->next=adjacencyList[v];
    adjacencyList[v]=n2;
}

bool Graph::isEdge(int u,int v){
    node *current=adjacencyList[u];
    while(current!=nullptr && current->data!=v)
        current=current->next;
    if(current==nullptr) return false;
    return true;
}
void Graph::display(){
    cout<<"printing list:\n";
    for(int i=0;i<nVertices;i++){
        cout<<i<<":";
        node *current=adjacencyList[i];
        while(current!=nullptr){
            cout<<current->data<<"\t";
            current=current->next;
        }
        cout<<endl;
    }
}
Graph::~Graph(){
    for(int i=0;i<nVertices;i++)
        delete  adjacencyList[i];
    delete [] adjacencyList;
}
int main(){
    Graph g(4,false);//undirected graph with 4 vertices
    g.addEdge(0,1);
    g.addEdge(0,3);
    g.addEdge(1,3);
    g.addEdge(1,2);
    g.display();
}
