#include<stdlib.h>
#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
};
/*Function used to print all the elements of stack.*/
void print(struct node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}
/*Function used to create a new node*/
struct node* newnode(int data){
	struct node *node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->next=NULL;
	return node;
}
/*Function used to push node/element in stack.*/
struct node* push(struct node *head,int data){
	struct node *stacknode =newnode(data);
	stacknode->next=head;
	head=stacknode;
	return head;
}
int main(){
	struct node *head= NULL;
    int num_node,data;
    cin>>num_node;
    for(int i=0;i<num_node;i++){
    	cin>>data;
    	head=push(head,data);
	}
	print(head);
	return 0;
}
