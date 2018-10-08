//Values are unique and visited[val] is maintained
//The class will be maintained for whole graph.. see the class definition
#include <bits/stdc++.h>

using namespace std;

class graph {
public:
	int v;
	list<int> *adj;
	graph(int a) {
		this->v=a;
		adj = new list<int>[v];
	}
};

void printGraph(graph g) {
	for(int i=0;i<g.v;i++) {
		cout<<i<<": ";
		for(list<int>::iterator it=g.adj[i].begin();it!=g.adj[i].end();++it) {
			cout<<*it<<" ";
		}
		cout<<endl;
	}
}

int main() {

	cout<<"Enter number of vertices: ";
	int v;cin>>v;
	graph g(v);

	char ch='y';

	do {
		int x,y; cin>>x>>y;
		g.adj[x].push_back(y);
		//undirected graph
		g.adj[y].push_back(x);
		cout<<"Do you want to enter more? y:n "; cin>>ch;
	} while(ch=='y');

	printGraph(g);
	return 0;
}