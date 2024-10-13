#include <stdio.h>
#include "graph.h"

int main() {
    // Create a graph with 6 vertices
    Graph* graph = createGraph(6);

    // Add edges
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 4);
    addEdge(graph, 3, 5);
    addEdge(graph, 4, 5);

    // Print the graph
    printGraph(graph);

    // Perform DFS starting from vertex 0
    printf("\nDepth-First Search starting from vertex 0:\n");
    DFS(graph, 0);

    // Reset the visited array for BFS
    for (int i = 0; i < graph->numVertices; i++) {
        graph->visited[i] = false;
    }

    // Perform BFS starting from vertex 0
    printf("\n\nBreadth-First Search starting from vertex 0:\n");
    BFS(graph, 0);

    return 0;
}
