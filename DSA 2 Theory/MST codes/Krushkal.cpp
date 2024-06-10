#include<bits/stdc++.h>
using namespace std;

struct Node {
	int parent;
	int rank;
};

struct Edge {
	int src;
	int dst;
	int wt;
};

vector<Node> node;
vector<Edge> edge_List, mst;

int find(int v) {
	if(node[v].parent == -1)
		return v;
	return node[v].parent = find(node[v].parent);
}

void union_op(int from, int to) {
	if(node[from].rank > node[to].rank)
		node[to].parent = from;
	else if(node[from].rank < node[to].rank)
		node[from].parent = to;
	else {
		node[to].parent = from;
		node[from].rank += 1;
	}
}

bool comparator(Edge a, Edge b) {
	return a.wt < b.wt;
}

void Kruskals(vector<Edge>& edge_List, int V, int E) {
	sort(edge_List.begin(), edge_List.end(), comparator);

	int i = 0, j = 0;
	while(i < V - 1 && j < E) {

		int from = find(edge_List[j].src);
		int to = find(edge_List[j].dst);

		if(from == to) {
			++j;
			continue;
		}

		union_op(from, to);
		mst.push_back(edge_List[j]);
		++i;
	}
}

void printMST(vector<Edge>& mst) {
	cout << "MST formed is\n";
	for(auto p: mst)
		cout << "src: " << p.src << "  dst: " << p.dst << "  wt: " << p.wt << "\n";
}

int main() {
	int E, V;
	cout << "Enter number of vertices and edges: ";
	cin >> V >> E;

	node.resize(V);

	for(int i = 0; i < V; ++i) {
		node[i].parent = -1;
		node[i].rank = 0;
	}


	Edge temp;

	for(int i = 0; i < E; ++i) {
		int from, to, wt;
		cout << "Enter from, to, weight: ";
		cin >> from >> to >> wt;
		temp.src = from;
		temp.dst = to;
		temp.wt = wt;
		edge_List.push_back(temp);
	}

	Kruskals(edge_List, V, E);
	printMST(mst);

	return 0;
}
