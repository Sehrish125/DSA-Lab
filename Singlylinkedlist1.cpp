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
	n3->next = nullptr;
	cout<<"Linked List.\n";
	node *head;
	head = n1;
	while (head!=nullptr){
		cout<<head->data<<endl;
		head = head->next;
	}
	cout<<"Insertion at Start.\n";
	node* newNode = new node;
	newNode -> data = 8;
	newNode -> next = n1;
	head = newNode;
	
	node *curr = head;
	while (curr!= nullptr){
		cout<<curr->data<<endl;
		curr = curr->next;
	}
	
	cout<<"Insertion at End.\n";
	node* newNode1 = new node;
	newNode1->data=16;
	newNode1->next= nullptr;
	node* curr1 = head;
    while (curr1->next != nullptr) {
        curr1 = curr1->next;
    }
    curr1->next = newNode1;
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << endl;
        temp = temp->next;
}
   cout<<"Insertion in the middle.\n";
   int value;
   cout<<"Enter Position.";
   cin>> value;
   node *ptr = head;
   while (ptr->data!=value){
   	ptr = ptr->next;
   }
   node* newNode2 = new node;
   newNode2->data = 20;
   newNode2->next = ptr->next;
   ptr->next = newNode2;
   node *j = head;
   cout<<"Final linked List.\n";
   while (j!=NULL){
   	cout<<j->data<<endl;
   	j = j->next;
   	
   }
   return 0;
}
