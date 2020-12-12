#include<bits/stdc++.h>
using namespace std;
struct node
{
int data;
node *next;
};
node* insertAtBeg(node *head)
{
	int data;
	node *ptr=new node;
	ptr->next=head;
	cout<<"enter the data in new node"<<endl;
	cin>>ptr->data;
	return ptr;
}
void display(node *ptr)
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
    head=insertAtBeg(head);
    cout<<"linked list after insertion first node"<<endl;
	display(head);
}
