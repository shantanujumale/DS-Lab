#include <stdio.h>
#include <stdlib.h>

// write your code here 
struct node{
int data;
struct node *prev;
struct node *next;
};
typedef struct node *NODE;
NODE createNodeInDILL(){
	NODE temp;
	temp=(NODE)malloc(sizeof(struct node));
	temp->prev=NULL;
	temp->next=NULL;
	return temp;
}
NODE first=NULL;
void insert(int x){
	NODE temp,lastNode=first;
	temp=createNodeInDILL();
	temp->data=x;
if(first==NULL)
		first=temp;
	else{
		while(lastNode->next!=NULL)
			lastNode=lastNode->next;
		lastNode->next=temp;
		temp->prev=lastNode;
	}
}
void remov(int x){
	NODE temp=first;
	if(first==NULL){
		printf("list is empty\n");
		return;
