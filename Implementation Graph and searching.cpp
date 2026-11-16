#include <iostream>
#include <vector>
using namespace std;

class Graph {
    int vertices;
    vector<int> adj[100];

public:
    Graph(int v) {
        vertices = v;
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void display() {
        for (int i = 0; i < vertices; i++) {
            cout << i << " -> ";
            for (int j : adj[i]) {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);

    g.display();

    return 0;
}
