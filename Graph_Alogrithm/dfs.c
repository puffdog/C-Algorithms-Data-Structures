#include <stdio.h>
#include "graph.h"

// Depth-First Search algorithm
void DFS(Graph* graph, int vertex) {
    graph->visited[vertex] = true;
    printf("%d ", vertex);

    Node* adjList = graph->adjLists[vertex];
    Node* temp = adjList;

    while (temp != NULL) {
        int connectedVertex = temp->vertex;

        if (!graph->visited[connectedVertex]) {
            DFS(graph, connectedVertex);
        }
        temp = temp->next;
    }
}
