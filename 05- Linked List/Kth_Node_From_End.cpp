//Find the Kth node from the End
// In the given Singly Linked List


#include<iostream>
using namespace std;
class node{
public:
	int data;
	node*next;
	node(int d){
		data=d;
		next=NULL;
	}
};

void insertAthead(node*&head,int d){
   node*n= new node(d);
   n->next= head;
   head=n;
}
void printList(node*head){
	while(head!=NULL){
		cout<<head->data<<"-->";
		head= head->next;
	}
	
}
void kthFromtheEnd(node*head, int k){
   node*slow= head;
   node*fast= head;
   for(int i=0;i<k;i++){
   	fast= fast->next;
   }
   while(fast!=NULL){
   	slow= slow->next;
   	fast= fast->next;
   }
   cout<<"Node from the "<<k<<"th position is"<<slow->data<<endl;
}

int main(){
   node*head= NULL;
   insertAthead(head,2);
   insertAthead(head,4);
   insertAthead(head,5);
   insertAthead(head,6);
   insertAthead(head,7);
   printList(head);
   cout<<endl;
   kthFromtheEnd(head,4);
   return 0;
}