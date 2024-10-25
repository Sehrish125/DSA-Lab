#include<iostream>
using namespace std;
	struct node {
		int data;
		node *next;
	};
	int main (){
	node* n1 = new node;
	node* n2 = new node;
	node* n3 = new node;
	node* n4 = new node;
	node* n5 = new node;
	node* n6 = new node;
	n1 -> data = 10;
	n2 -> data = 12;
	n3 -> data = 14;
	n4 -> data = 16;
	n5 -> data = 18;
	n6 -> data = 20;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = n6;
	n6->next = nullptr;
	cout<<"Linked List.\n";
	node *head;
	head = n1;
	while (head!=nullptr){
		cout<<head->data<<endl;
		head = head->next;
	}
	cout<<"Deletion at Start.\n";
	head = n2;
	delete (n1);
	node *j = head;
	while (j!= nullptr){
		cout<<j->data<<endl;
		j = j->next;
	}
	cout<<"Deletion at End.\n";
	node *temp  = NULL;
	node *n = head;
	while (n->next!=NULL){
		temp = n;
		n = n->next;
}
		temp->next = NULL;
		delete (n);		
	node *k = head;
	while (k!= nullptr){
		cout<<k->data<<endl;
		k = k->next;
	}
	cout<<"Deletion at Specific Position.\n";
	cout<<"Enter the value You want to delete.";
	int value;
	cin>>value;
	node *pre = NULL;
	node *n0  = head;
	while (n0->data!=value){
		pre = n0;
		n0 = n0->next;	
	}
	pre->next = n0->next;
	node *l = head;
	while (l!= nullptr){
		cout<<l->data<<endl;
		l = l->next;
	}
	return 0;
}
