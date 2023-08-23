#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 100
struct Node {
    int data;
    struct Node* next;
};
struct Graph {
    int numNodes;
    struct Node* adjacencyList[MAX_NODES];
};
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void addEdge(struct Graph* graph, int src, int dest) {
    struct Node* newNode = createNode(dest);
    newNode->next = graph->adjacencyList[src];
    graph->adjacencyList[src] = newNode;
}
void printPathsDFS(struct Graph* graph, int current, int destination, int* visited, int* path, int pathLength) {
    visited[current] = 1;
    path[pathLength++] = current;

    if (current == destination) {
        
        int i;
        for (i = 0; i < pathLength; ++i) {
            printf("%d ", path[i]);
        }
        printf("\n");
    } else {
        struct Node* neighbor = graph->adjacencyList[current];
        while (neighbor != NULL) {
            if (!visited[neighbor->data]) {
                printPathsDFS(graph, neighbor->data, destination, visited, path, pathLength);
            }
            neighbor = neighbor->next;
        }
    }

    visited[current] = 0; 
}

int main() {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->numNodes = 5;
	int i;
    for (i = 0; i < graph->numNodes; ++i) {
        graph->adjacencyList[i] = NULL;
    }

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);

    int visited[MAX_NODES] = {0};
    int path[MAX_NODES];
    int start = 0;
    int destination = 4;

    printf("Valid paths from %d to %d:\n", start, destination);
    printPathsDFS(graph, start, destination, visited, path, 0);

    return 0;
}

