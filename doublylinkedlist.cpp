#include<iostream>
using namespace std;
class node
{
	public:
		node *prev;
		int data;
		node *next;
		
		node()
		{
			this->prev=NULL;
			this->next=NULL;
			this->data=0;
		}
};
class doubly
{
	public:
		node *head;
		
		doubly()
		{
			head=0;
		}
		
		void traverse()
		{
			node *kn;
			kn=head;
			do
			{
				cout<<kn->data<<" ";
				kn=kn->next;
			}while(kn!=head);
			cout<<endl;
		}
		
		void addbeginning(int data)
		{
			
			node *temp= new node;
			temp->data=data;
			if(head==NULL)
			{
				temp->next=temp;
				temp->prev=temp;
				head=temp;
			}
			else
			{
				node *l1;
				l1=head;
				while(l1->next!=head)
				{
					l1=l1->next;
				}
				l1->next=temp;
				temp->next=head;
				temp->prev=l1;
				head->prev=temp;
				head=temp; 
			}
		}
		
		void addend(int data)
		{
			
			node *temp= new node;
			temp->data=data;
			if(head==NULL)
			{
				temp->prev=temp;
				temp->next=temp;
				head=temp;				
			}
			else
			{
				node *ks;
				ks=head;
				while(ks->next!=head)
				{
					ks=ks->next;
				}
				ks->next=temp;	
				temp->next=head;
				temp->prev=ks;
				head->prev=temp;
			}	
		}
		
		void middle(int position, int data)
		{
			node *temp= new node;
			temp->data=data;
			temp->next=NULL;
			if(head==NULL)
			{
				head=temp;
			}
			else
			{
				node *my;
				while(my->data!=position)
				{
					my=my->next;
				}
				temp->prev=my;
				temp->next=my->next;
				my->next->prev=temp;
				my->next=temp;
			}
		}
		
		void deletestart()
		{
			if(head==NULL)
			{
				cout<<"List is empty";
			}
			else
			{
				node *q=head;
				node *jh;
				jh=head;
				while(jh->next!=head)
				{
					jh=jh->next;
				}
				jh->next=q->next;
				q->next->prev=jh;
				head=q->next;
				delete(q);
			}
		}		
		
		void deletemid(int data)
		{
			node *jh;
			node *pre;
			jh=head;
			while(jh->data!=data)
			{
				pre=jh;
				jh=jh->next;
			}
			pre->next=jh->next;
			jh->next->prev=pre;
			delete(jh);
		}
		
		void deleteend()
		{
			node *pj;
			pj=head;
			while(pj->next!=head)
			{
				pj=pj->next;
			}
			pj->prev->next=head;
			head->prev=pj->prev->next;
			delete(pj);
		}
};
int main()
{

	doubly d1;
	d1.addbeginning(7);
	d1.addend(9);
	d1.middle(7,10);
	d1.addbeginning(13);
	cout<<"full traversion"<<endl;
	d1.traverse();
	d1.deletestart();
	cout<<"start delete"<<endl;
	d1.traverse();
	cout<<"middle delete"<<endl;
	d1.deletemid(10);
	d1.traverse();
	cout<<"end delete"<<endl;
	d1.deleteend();
	d1.traverse();
}
