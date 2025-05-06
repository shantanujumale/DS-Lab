struct node{
int data;
struct node *next;
};
typedef struct node *NODE;
NODE createNode()
{
	NODE temp;
	temp=(NODE)malloc(sizeof(struct node));
	temp->next=NULL;
	return temp;
}

NODE addNode(NODE head, int x){
	NODE temp,lastNode=head;
	temp=createNode();
	temp->data=x;

	if(head==NULL){
		head=temp;
	}
	else{
		while(lastNode->next != NULL){
			lastNode=lastNode->next;
		}
		lastNode->next=temp;
	}
	return head;
}
void displayList(NODE head){
	NODE temp=head;
	while(temp!=NULL){
		printf("%d --> ",temp->data);
		temp=temp->next;
		
	}
}
