#include <iostream>
#include <vector>
#include <climits> // Include for INT_MAX

using namespace std;

// Structure to represent a weighted edge in a graph
struct Edge {
    int src, dest, weight;
};

// Structure to represent a graph
struct Graph {
    int V, E;
    vector<Edge> edges;

    // Constructor
    Graph(int v, int e) {
        V = v;
        E = e;
        edges.resize(E);
    }
};

// Utility function to print the solution
void printArr(vector<int>& dist) {
    cout << "Vertex   Distance from Source\n";
    for (int i = 0; i < dist.size(); ++i)
        cout << i << "\t\t" << dist[i] << "\n";
}

// Bellman-Ford algorithm function
void bellmanFord(Graph& graph, int src) {
    int V = graph.V;
    int E = graph.E;
    vector<int> dist(V, INT_MAX);
    dist[src] = 0;

    // Relax all edges |V| - 1 times
    for (int i = 1; i <= V - 1; i++) {
        for (int j = 0; j < E; j++) {
            int u = graph.edges[j].src;
            int v = graph.edges[j].dest;
            int weight = graph.edges[j].weight;
            if (dist[u] != INT_MAX && dist[u] + weight < dist[v])
                dist[v] = dist[u] + weight;
        }
    }

    // Check for negative-weight cycles
    for (int i = 0; i < E; i++) {
        int u = graph.edges[i].src;
        int v = graph.edges[i].dest;
        int weight = graph.edges[i].weight;
        if (dist[u] != INT_MAX && dist[u] + weight < dist[v]) {
            cout << "Graph contains negative weight cycle\n";
            return;
        }
    }

    // Print the distance array
    printArr(dist);
}

// Driver code
int main() {
    int V = 5; // Number of vertices in the graph
    int E = 8; // Number of edges in the graph
    Graph graph(V, E);

    // Adding edges to the graph
    graph.edges[0] = {0, 1, -1};
    graph.edges[1] = {0, 2, 4};
    graph.edges[2] = {1, 2, 3};
    graph.edges[3] = {1, 3, 2};
    graph.edges[4] = {1, 4, 2};
    graph.edges[5] = {3, 2, 5};
    graph.edges[6] = {3, 1, 1};
    graph.edges[7] = {4, 3, -3};

    // Function call
    bellmanFord(graph, 0);

    return 0;
}
