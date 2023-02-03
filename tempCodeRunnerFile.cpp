#include <bits/stdc++.h>
using namespace std;
class Kruskal{
	int *parent;
	int *child;

public:
	Kruskal(int n){
		parent = new int[n];
		child = new int[n];

		for (int i = 0; i < n; i++){
			parent[i] = -1;
			child[i] = 1;
		}
	}

	
	int find(int i){
		if (parent[i] == -1)
			return i;

		return parent[i] = find(parent[i]);
	}
	void unite(int x, int y){
		int E = find(x);
		int Edge = find(y);

		if (E != Edge){
			if (child[E] < child[Edge]){
				parent[E] = Edge;
				child[Edge] += child[E];
			}
			else{
				parent[Edge] = E;
				child[E] += child[Edge];
			}
		}
	}
};

class Graph{
	vector<vector<int>> edgelist;
	int V;

public:
	Graph(int V){
		this->V = V;
	}

	void addEdge(int x, int y, int w){
		edgelist.push_back({w, x, y});
	}

	int kruskals_mst(){
		sort(edgelist.begin(), edgelist.end());

		Kruskal s(V);
		int ans = 0;
		for (auto edge : edgelist){
			int w = edge[0];
			int x = edge[1];
			int y = edge[2];

			if (s.find(x) != s.find(y)){
				s.unite(x, y);
				ans += w;
			}
		}
		return ans;
	}
};
int main(){
	Graph g(4);
	g.addEdge(0, 1, 2);
	g.addEdge(1, 3, 6);
	g.addEdge(3, 2, 8);
	g.addEdge(2, 0, 9);
	g.addEdge(0, 3, 10);
	g.addEdge(1, 2, 12);


	cout << g.kruskals_mst();
	return 0;
}
