#ifndef GRAPH_H
#define GRAPH_H

#include <stdbool.h>

// Graph structure using adjacency lists
typedef struct Node {
    int vertex;
    struct Node* next;
} Node;

typedef struct Graph {
    int numVertices;
    Node** adjLists;
    bool* visited;
} Graph;

// Function prototypes
Graph* createGraph(int vertices);
void addEdge(Graph* graph, int src, int dest);
void printGraph(Graph* graph);
void DFS(Graph* graph, int startVertex);
void BFS(Graph* graph, int startVertex);

#endif // GRAPH_H
