#include<stdio.h>
#include<stdlib.h>

// Write your code here...
struct node{
int vertex;
struct node *next;
};
typedef struct node *GNODE;
GNODE graph[20];
int visited[20];
int n;

void DFS(int i){
	GNODE p;
	printf("\n%d",i);
	p=graph[i];
	visited[i]=1;
	while(p!=NULL){
		i=p->vertex;
		if(visited[i]!=1)
			DFS(i);
		p=p->next;
	}
}







void main() {
    int n,E,i,s,d,v;
    GNODE q,p;
    printf("Enter no of vertices: ");
}
