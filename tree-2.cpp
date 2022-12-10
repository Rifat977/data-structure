#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *left;
	struct node *right;
};

void inorderTraversal(struct node *root)
{
    if (root==NULL) return;
    inorderTraversal(root->left);
    printf("%d ->", root->data);
    inorderTraversal(root->right);
}
void preorderTraversal(struct node*root)
{
    if (root==NULL)
        return;
    printf("%d ->", root->data);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
void postorderTraversal(struct node*root)
{
    if (root==NULL)
        return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ->", root->data);
}

struct node *create_node(int value){
	struct node *new_node = (struct node *) malloc(sizeof(struct node));
	new_node->data = value;
	new_node->left = NULL;
	new_node->right = NULL;
	
	return new_node;
}

struct node *add_to_left(struct node *root, int child){
	root->left = create_node(child);
	return root->left;
}

struct node *add_to_right(struct node *root, int child){
	root->right = create_node(child);
	return root->right;
}

int main(){
	struct node *root = create_node(50);
	add_to_left(root,30);
    add_to_right(root,40);
    add_to_left(root->left,10);
    add_to_right(root->left,20);
     printf("inorder traversal :\n");
    inorderTraversal(root);
    printf("\n preorder traversal :\n");
    preorderTraversal(root);
    printf("\n postorder traversal :\n");
    postorderTraversal(root);
	return 0;
}
    
    
    
    
    
    
    
