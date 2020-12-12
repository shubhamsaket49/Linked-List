#include<bits/stdc++.h>
using namespace std;
struct node
{
int data;
node *next;
};
node* deleteAtIndex(node *head,int index)
{
	node *p=head;
	node *q=head->next;
	cout<<"Enter the index from where u want to delete a node"<<endl;
	cin>>index;
	for(int i=0;i<index-1;i++)
	{
		p=p->next;
		q=q->next;
		
	}
	p->next=q->next;
	free(q);
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
	head=deleteAtIndex(head,index);
	cout<<"linked list after deletion of node from particular index"<<endl;
	display(head);
}
