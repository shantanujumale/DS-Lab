#include <stdio.h>
#include <stdlib.h>
#define MAX 99

struct node{
	int vertex;
struct node *next;

};
typedef struct node *GNODE;
GNODE graph[20];
int visited[20];
int queue[MAX],front=-1,rear=-1;
int IsEmptyQueue()
{
	if(front==-1 || front>rear)
		return 1;
	else return 0;
}
void InsertQueue(int vertex){
	if(rear==MAX-1)
		printf("Queue Overflow.");
	else{
		if(front==-1)
			front=0;
		rear++;
		queue[rear]=vertex;
	}
}
int DeleteQueue(){
	int DeleteItem;
	if(front==-1|| front>rear){
		printf("Queue Overflow");
		return 0;
		
	}
}
