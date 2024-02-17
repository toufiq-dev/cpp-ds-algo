#include <bits/stdc++.h>
using namespace std;

void bfs (vector<vector<int>> &adj, int src, vector<int> &visited) {
    // visited[src] = 
    // 1. 
}

int main() {
    int n, m, u, v, src;
    vector<vector<int>> adj;
    vector<int> visited;
    adj.resize(n + 1, {});
    visited.resize(n + 1, 0);

    cout << "Enter the no. of nodes and edges: ";
    cin >> n >> m;

    while(m--) {
        cout << "Enter the edges: ";
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << "Enter the source node: ";
    cin >> src;

    bfs(adj, src, visited);

    return 0;
}