#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n , m;
	cin >> n >> m;

	/* declare the adjacent matrix
	int adj[n+1][m+1];

	//take edges as input
	for(int i = 0 ; i < m ; i++){
		int u,v;
		cin >> u >> v;
		adj[u][v] = 1;
		adj[v][u] = 1;
	} */

	//  using adjacency list
	vector<pair<int , int >> adj[n + 1];
	for (int i = 0 ; i < m ; i++) {
		int u , v , wt;
		cin >>  u >> v >> wt;
		adj[u].push_back({v, wt});
		adj[v].push_back({u, wt});
	}

	return 0;
}