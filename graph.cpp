#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void addEdge(struct Node* adjacencyList[], int src, int dest) {

    struct Node* newNode = createNode(dest);
    newNode->next = adjacencyList[src];
    adjacencyList[src] = newNode;

    newNode = createNode(src);
    newNode->next = adjacencyList[dest];
    adjacencyList[dest] = newNode;
}

void printAdjacencyList(struct Node* adjacencyList[], int vertices) {
    int i;
    for ( i = 0; i < vertices; i++) {
        struct Node* temp = adjacencyList[i];
        printf("%d: ", i);
        while (temp != NULL) {
            printf("%d", temp->data);
            temp = temp->next;
            if (temp != NULL) {
                printf("->");
            }
        }
        printf("\n");
    }
}

int main() {
    int i;
    int vertices = 5;


    struct Node* adjacencyList[vertices];

    for ( i = 0; i < vertices; i++) {
        adjacencyList[i] = NULL;
    }

    addEdge(adjacencyList, 0, 1);
    addEdge(adjacencyList, 0, 4);
    addEdge(adjacencyList, 1, 2);
    addEdge(adjacencyList, 1, 3);
    addEdge(adjacencyList, 1, 4);
    addEdge(adjacencyList, 2, 3);
    addEdge(adjacencyList, 3, 4);

    printAdjacencyList(adjacencyList, vertices);

    return 0;
}