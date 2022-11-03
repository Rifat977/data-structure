#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};

struct Node* head = NULL;

void addFirst(int new_data){
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = head;
	head = new_node;
}

void display(){
	struct Node* ptr;
	while(ptr != NULL){
		cout << ptr->data << " ";
		ptr = ptr->next;
	}
}

int reverseValue(int num){
	int value = 0, rem;
	while(num != 0){
		rem = num % 10;
		value = value * 10 + rem;
		num /= 10;
	}
	return value;
}

void reverseList(struct Node* node){
	if(node == NULL)
		return;
	while(node != NULL){
		node->data = reverseValue(node->data);
		node = node->next;
	}
}

int main(){
	addFirst(25); addFirst(39); addFirst(57);
	display();
	
	return 0;
}





