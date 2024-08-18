#include <iostream>
using namespace std;
class node
{
	public:
		
			int data;
			node* next;
			node* pre;
			
			node (int value)
			{
				data=value;
				next=NULL;
				pre=NULL;
			}
		
};
int main()
{
	int arr[]={2,5,8,9,4};
	node *head,*temp,*good;
	head=temp=good=NULL;
	for(int i=0;i<5;i++)
	if(head==NULL)
	{ 
	  head=new node(arr[i]);
	  temp=head;
	  good=head;
	}
	else 
	{   
		temp->next=new node(arr[i]);
		temp=temp->next;
		temp->pre=good;
		good=temp;
		
	}
	int i=3;
	if(i==1)
	{
		node*te=head;
		head=te->next;
		head->pre=NULL;
		
	}
	
	else
	{
	
	node *te=head;
	node *pre=NULL;
	node *fu=NULL;
	while(--i)
	{  pre=te;
		te=te->next;
		fu=te->next;
	}
	 if(te->next==NULL)
	 {
	 	pre->next=NULL;
	 	delete te;
	 }
	 else {
	 
	pre->next=te->next;
	fu->pre=pre;
	delete te;}
}
	node *op;
	op=head;
	while(op)
	{
		cout<<op->pre<<" "<<op->data<<" "<<op->next<<endl;;
		op=op->next;
	}
	
}
	
