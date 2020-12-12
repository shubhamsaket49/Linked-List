#include<bits/stdc++.h>
using namespace std;
struct node
{
int data;
node *next;
};
node* deletefirst(node *head)
{
	node *ptr=head;
	head=head->next;
	free(ptr);
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
	head=deletefirst(head);
	cout<<"linked list after deletion of first node"<<endl;
	display(head);
}
