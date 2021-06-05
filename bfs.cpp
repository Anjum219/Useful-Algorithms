#include <bits/stdc++.h>

using namespace std;

vector <int> bfs(vector<int> g[], int N) {
    vector <int> traversed;

    bool visited[N];
    for( int i = 0; i < N; i++ ){
        visited[i] = false;
    }

    queue <int> q;
    int s = 0;
    visited[s] = true;
    q.push(s);

    while( !q.empty() ){
        int node = q.front();
        traversed.push_back(node);
        q.pop();
        for( int i = 0; i < g[node].size(); i++ ){
            int neighbor = g[node][i];
            if( visited[neighbor] == false ){ //inserting unvisited nodes of the next depth into queue
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    return traversed;
}

int main() {
    int T; //number of test cases
    cin >> T;
    while (T--) {
        int N, E; //number of nodes, edges
        cin >> N >> E;
        vector<int> adj[N];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }
        vector <int> res = bfs(adj, N);
        for (int i = 0; i < res.size (); i++) cout << res[i] << " ";
        cout << endl;
    }
}
