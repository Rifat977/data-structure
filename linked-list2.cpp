#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};

struct node *head = NULL;

void addFirst(int value){
	struct node *new_node = (struct node *) malloc(sizeof(struct node));
	new_node->data = value;
	new_node->next = head;
	
	head = new_node;
}

void addLast(int value){
	struct node *new_node = (struct node *) malloc(sizeof(struct node));
	new_node->data = value;
	new_node->next = NULL;
	if(head==NULL){
		head=new_node;
	}else{
		struct node *lastnode = head;
		while(lastnode->next != NULL){
			lastnode = lastnode->next;
		}
		lastnode->next = new_node;
	}
}


int count_nodes(){
	struct node *ptr;
	int count = 0;
	while(ptr != NULL){
		count++;
		ptr = ptr->next;
	}
	return count;
}

void display(){
	struct node *ptr;
	while(ptr != NULL){
		cout << ptr->data << "->";
		ptr = ptr->next;
	}
	cout<<"NULL\n";
}

int main(){	
	system("color 0F");
		
	addLast(10);
	addLast(20);
	addLast(30);
	addFirst(0);
	
	display();
	
	return 0;
}


