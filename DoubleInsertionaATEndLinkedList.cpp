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

	node *curr;
	curr=head;
	while(curr->next)
	{
		curr=curr->next;
	}
	node *te=new node(5);
	curr->next=te;
	te->pre=curr;
	//curr=te;
	
	node *op;
	op=head;
	while(op)
	{
		cout<<op->pre<<" "<<op->data<<" "<<op->next<<endl;;
		op=op->next;
	}
}
