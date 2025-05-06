#include <stdio.h>
#include <stdlib.h>

// write your code here 
struct node{
int data;
struct node *next;
};
typedef struct node *NODE;
NODE createNodeInCLL(){
	NODE temp;
	temp=(NODE)malloc(sizeof(struct node));
	temp->next=NULL;
	return temp;
}
NODE insertEnd(NODE first ,int x){
	NODE temp,lastNode=first;
	temp=createNodeInCLL();
	temp->data=x;
	if(first==NULL){
		first = temp;
		
	}
	else{
		while(lastNode->next!=first)
			lastNode=lastNode->next;
		lastNode->next=temp;
	}
	temp->next=first;
	return first;
}
void displayList(NODE first){
	NODE temp=first;
	if(first==NULL)
		printf("Circular Linked List is empty\n");
	else{
