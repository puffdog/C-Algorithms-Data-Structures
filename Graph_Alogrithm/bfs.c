#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

// Breadth-First Search algorithm
void BFS(Graph* graph, int startVertex) {
    int* queue = malloc(graph->numVertices * sizeof(int));
    int front = 0;
    int rear = 0;

    graph->visited[startVertex] = true;
    queue[rear++] = startVertex;

    while (front < rear) {
        int currentVertex = queue[front++];
        printf("%d ", currentVertex);

        Node* temp = graph->adjLists[currentVertex];

        while (temp) {
            int adjVertex = temp->vertex;

            if (!graph->visited[adjVertex]) {
                graph->visited[adjVertex] = true;
                queue[rear++] = adjVertex;
            }
            temp = temp->next;
        }
    }
    
    free(queue);
}
