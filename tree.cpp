#include<bits/stdc++.h>
using namespace std;

typedef struct node Node;
struct node{
	int data;
	Node *left;
	Node *right;
};

Node *create_node(int item){
	Node *new_node = (Node *) malloc(sizeof(Node));
	if(new_node == NULL){
		cout << "Error to allocation memory";
		exit(1);
	}
	
	new_node->data = item;
	new_node->left = NULL;
	new_node->right = NULL;
	
	return new_node;
}


void add_left_child(Node *node, Node *child){
	node->left = child;
}

void add_right_child(Node *node, Node *child){
	node->right = child;
}

Node *create_tree(){
	Node *two = create_node(1);
	Node *seven = create_node(2);
	Node *nine = create_node(3);
	add_left_child(two, seven);
	add_right_child(two, nine);
	return two;
}

int main(){
	create_tree();
	Node *ptr;
	printf("%d", ptr->data);
	return 0;
}














