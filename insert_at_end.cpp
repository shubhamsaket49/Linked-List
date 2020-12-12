#include<bits/stdc++.h>
using namespace std;
struct node
{
int data;
node *next;
};
node* insertAtEnd(node *head)
{
	int data;
	node *ptr=new node;
	cout<<"enter the data of new last node"<<endl;
	cin>>ptr->data;
	node *p=head;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=ptr;
	ptr->next=NULL;
	return head;
}
node *display(node *ptr)
{
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"---->";
		ptr=ptr->next;
	}
	cout<<"NULL"<<endl;
}
int main()
{
	node *head= new node;
	node *second=new node;
	node *third= new node;
	node *tail=new node;
	
	cout<<"enter the data in first node"<<endl;
	cin>>head->data;
	head->next=second;
	cout<<"enter the data in second node"<<endl;
	cin>>second->data;
	second->next=third;
	cout<<"enter the data in third node"<<endl;
	cin>>third->data;
	third->next=tail;
	cout<<"enter the data in last node"<<endl;
	cin>>tail->data;
	tail->next=NULL;
	head=insertAtEnd(head);
	cout<<"linked list after insertion last node"<<endl;
	display(head);
}
