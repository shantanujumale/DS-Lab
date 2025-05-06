#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node* next;
};
typedef struct node *NODE;
NODE createNodeIncLL()
{
	NODE temp;
	temp=(NODE)malloc(sizeof(struct node));
	temp->next=NULL;
	return temp;
}
NODE 
insertAtPositionInCLL(NODE first,int position,int x){
	NODE temp, lastNode=first;
	for(int x=1;x<(position-1);x++){
		if(lastNode->next==first){
			printf("Position not found\n");
			return first;
		}
		lastNode=lastNode->next;
	}
	if(position<=0 || (position>1 && first==NULL)){
		printf("Position not found");
	}
	else{
		temp=createNodeIncLL();
		temp->data=x;
		if(position==1){
			if(first==NULL){
				first=temp;
				temp->next=first;
