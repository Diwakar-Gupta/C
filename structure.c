#include<stdio.h>

struct stor{
	int data;
	struct stor *next;
};

void add(int data,struct stor *root){

	struct stor node;
	node.data=data;
	node.next=NULL;

	struct stor *current=root;

	while(1){

		if(current->next==NULL){
			current->next=&node;
			break;
		}

		else
			current = current->next;
		

	}

}

void disp(struct stor *root){
	struct stor *current=root;
	while(1){

		printf("%d,",current->data);

		if(current->next==NULL){
			printf("/n");
			break;
		}

		else
			current = current->next;
	}
}

void main(){

	struct stor list;
	list.data=4;
	list.next=NULL;
	add(9,&list);
	disp(&list);
}
