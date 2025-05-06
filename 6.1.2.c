#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// write your code here 
struct DoublyLinkedList{
int data;
struct DoublyLinkedList *head;
struct DoublyLinkedList *tail;
};
struct DoublyLinkedList *createNode(){
	struct DoublyLinkedList *temp=(struct DoublyLinkedList*)malloc(sizeof(struct DoublyLinkedList));
	temp->head=NULL;
	temp->tail=NULL;
	return temp;
}
void append(struct DoublyLinkedList *first,int x){
	struct DoublyLinkedList *temp,*lastNode=first;
	temp=createNode();
	temp->data=x;
	if(first==NULL)
		first=temp;
	else{
		while(lastNode->head!=NULL)
			lastNode=lastNode->head;
		lastNode->head=temp;
		temp->tail=lastNode;
	}
}

void displayList(struct DoublyLinkedList *first){
	if(first==NULL){
		printf("List is empty\n");
		return;
	}
	while(first!=NULL){
