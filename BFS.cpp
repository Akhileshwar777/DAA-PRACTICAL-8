#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Graph {
    int V;
    vector<int> adj[100];
    bool visited[100] = {};

public:
    Graph(int v) {
        V = v;
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void BFS(int start) {
        queue<int> q;

        visited[start] = true;
        q.push(start);

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            cout << node << " ";

            for (int x : adj[node]) {
                if (!visited[x]) {
                    visited[x] = true;
                    q.push(x);
                }
            }
        }
    }
};

int main() {
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);

    cout << "BFS Traversal: ";
    g.BFS(0);

    return 0;
}
