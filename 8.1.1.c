#include<stdio.h>
#include<stdlib.h>

#define MAX 100

typedef struct node{
	int vertex;
	struct node* next;
} *GNODE;

GNODE graph[MAX] = {NULL};

void insertVertex(int *n);
void insertEdge(int *n);
void deleteVertex(int *n);
void deleteEdge(int *n);
void print(int *n);
void print(int *n);

void insertVertex(int *n) {
	(*n)++;
	printf("Vertex %d inserted.\n", *n);
}


void insertEdge(int *n) {
	int src, dest;
	printf("Enter the source vertex of the edge : ");
	scanf("%d", &src);
	printf("Enter the destination vertex of the edge : ");

	scanf("%d", &dest);
	if (src> *n || dest > *n || src <= 0 || dest <= 0) {
		printf("Invalid vertices.\n");
		return;
	}
}
