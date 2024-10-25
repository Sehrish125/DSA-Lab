#include<iostream>
using namespace std;
int main (){
	struct node {
		int data;
		node *next;
	};
	node* n1 = new node;
	node* n2 = new node;
	node* n3 = new node;
	n1 -> data = 10;
	n2 -> data = 12;
	n3 -> data = 14;
	n1->next = n2;
	n2->next = n3;
	n3->next = n1;
	cout<<"Linked List.\n";
	node *head;
	head = n1;
	node *a = head;
	do
	{
		cout<<a->data<<endl;
		a = a->next;
	}
	
	while (a!=head);
	
	cout<<"Insertion at Start : \n";
	node *n = new node;
	n->data = 8;
	node *temp = head;
	while (temp->next!=head){
		temp=temp->next;
	}
	temp->next = n;
	n->next = head;
	head = n;
	node *b=head;
	do
	{
		cout<<b->data<<endl;
		b = b->next;
	}
	while (b!=head);
	cout<<"Insertion at Middle : \n";
	node *n0 = new node;
	n0->data = 15;
	int value;
	cout<<"Enter the position :\n";
	cin>>value;
	node *m = head;
	node *p = head;
	while (m->data!=value){
		m = m->next;
		p=m;
	}
	p->next = n0;
	n0->next = m;
	node *d = head; 
	do
	{
		cout<<d->data<<endl;
		d = d->next;
	}
	while (d!=head);
	cout<<"Insertion at End : \n";
	node *n4 = new node;
	n4->data = 16;
	node *temp1 = head;
	while (temp1->next!=head){
		temp1=temp1->next;
	}
	temp1->next = n4;
	n4->next = head;
	node *c=head;
	do
	{
		cout<<c->data<<endl;
		c = c->next;
	}
	while (c!=head);
	return 0;
}
