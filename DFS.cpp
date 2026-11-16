#include <iostream>
#include <vector>
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

    void DFS(int start) {
        visited[start] = true;

        cout << start << " ";

        for (int x : adj[start]) {
            if (!visited[x]) {
                DFS(x);
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

    cout << "DFS Traversal: ";
    g.DFS(0);

    return 0;
}
