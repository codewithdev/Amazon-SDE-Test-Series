//Given only a pointer to a node to be deleted in a singly linked list



#include<iostream>
using namespace std;
class node{
public:
	int data;
	node*next;
	node(int d){
		data=d;
		next= NULL;
	}
};

void insertAthead(node*&head, int d){
	node*n= new node(d);
	n->next= head;
	head= n;
}
void printList(node*head){
	while(head!=NULL){
		cout<<head->data<<"-->";
		head= head->next;
	}
}
void deleteNode(node*head){
	node*prev;
	if(head==NULL){
		return;
	}
	else{
	  while(head->next!=NULL){
	  	head->data=head->next->data;
	  	prev= head;
	  	head= head->next;
	  }
	  prev->next= NULL;
	}
}
int main(){

	node*head= NULL;
	insertAthead(head,2);
	insertAthead(head,3);
	insertAthead(head,4);
	insertAthead(head,5);
	insertAthead(head,6);
	printList(head);
	deleteNode(head);
	cout<<endl;
	printList(head);
}