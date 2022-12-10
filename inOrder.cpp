#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node *left, *right;
};

Node* newNode(int data){
	Node *temp = new Node;
	temp->data = data;
	temp->right = temp->left = NULL;
	return temp;
}

void printInorder(struct Node* node){
	if(node == NULL) return;
	printInorder(node->left);
	cout << node->data << " ";
	printInorder(node->right);
}

int main(){
	struct Node* root = newNode(100);
	root->left = newNode(1);
	root->right = newNode(2);
	root->left->left = newNode(3);
	root->left->right = newNode(4);
	cout << "Inorder: ";
	printInorder(root);
	return 0;
}



