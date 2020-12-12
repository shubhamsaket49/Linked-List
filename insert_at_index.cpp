#include<bits/stdc++.h>
using namespace std;
struct node
{
int data;
node *next;
};
node* insertAtIndex(node *head,int index)
{
	node *ptr= new node;
	node *p= head;
	int i=0;
	cout<<"Enter the index at which u want to insert an elements"<<endl;
	cin>>index;
	while(i!=index-1)
	{
		p=p->next;
		i++;
	}
	cout<<"enter data of new node"<<endl;
	cin>>ptr->data;
	ptr->next=p->next;
	p->next=ptr;
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
	int index;
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
	head=insertAtIndex(head,index);
	cout<<"linked list after insertion of node from particular node"<<endl;
	display(head);
}
