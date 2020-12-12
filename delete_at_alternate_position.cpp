#include<bits/stdc++.h>
using namespace std;
struct node
{
int data;
node *next;
};
node* deleteAtAlternateIndex(node *head)
{
	node *p=head;
	node *q=head->next;
	while(p!=NULL && q!=NULL)
	{
			p->next=q->next;
			free(q);
			p=p->next;
			if(p!=NULL)
			{
				q=p->next;
			}
		
	}
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
	head=deleteAtAlternateIndex(head);
	cout<<"linked list after deletion of nodes from alternate position"<<endl;
	display(head);
}
