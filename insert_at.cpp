#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};

struct Node *head = NULL;

void insert_at(int value, int pos)
{
	struct Node *ptr;
	struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));
	new_node->data = value;
	new_node->next = NULL;
	pos--;
	while(pos != 1){
		ptr = ptr->next;
		pos--;
	}
	new_node->next = ptr->next;
	ptr->next = new_node;
	
}
void add_last(int value){
	struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));
	new_node->data = value;
	new_node->next = NULL;
	if(head==NULL){
		head = new_node;
	}else{
		struct Node *lastnode;
		while(lastnode->next != NULL){
			lastnode = lastnode->next;
		}
		lastnode->next = new_node;
	}
}

void add_first(int value){
	struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));
	new_node->data = value;
	new_node->next = head;
	
	head = new_node;
}

void display(){
	struct Node *ptr2;
	while(ptr2 != NULL){
		cout << ptr2->data << "->";
		ptr2 = ptr2->next;
	}
}

int main(){
	add_first(98);
	add_last(3);
	insert_at(67, 3);
	display();
	return 0;
}

