#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* node;
};

int nodesCount;
void push(struct Node **top, int x){
	struct Node* node =NULL;
	node=(struct Node*)malloc(sizeof(struct Node));

	if(!node){
		printf("Heap Overfloaw\n");
		exit(-1);
	}

	printf("Inserting %d\n", x);

	node->data=x;

	node->next=*top;
	*top=nede;
	nodesCount+=1;
}

int isEmpty(struct Node* top ){
	return top==NULL;
}

int peek(struct Node *top){
	if (!isEmpty(top)){
		return top -> data;
	}
	else {
		printf("The stack is empty\n");
		exit(EXIT_FAILURE);
	}

}
int pop(struct Node** top){
	struct Node *node;

	if (*top ==NULL){
		printf("Stack Under")

	}

}
