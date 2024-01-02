#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> dist;

void bfs(int src, int n) {
	dist.clear();
	dist.resize(n + 1, INT_MAX / 2);
	queue<int> Q;
	Q.push(src);
	dist[src] = 0;
	
	while (!Q.empty()) {
		int u = Q.front(); Q.pop();
		for (int v : adj[u]) {
			// if v is visited?
			if (dist[v] > dist[u] + 1) {
				dist[v] = dist[u] + 1;
				Q.push(v);
			}
		}
	}
}

int main() {
	int n, m, u, v, src;
	cin >> n >> m >> src;
	adj.clear();
	adj.resize(n + 1, {});
	for (int i = 0; i < m; i++) {
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	bfs(src, n);
	for (int i = 1; i <= n; i++) {
		cout << i << " : " << dist[i] << "\n";
	}
	return 0;
}