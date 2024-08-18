#include <iostream>
#include<vector>
using namespace std;
class node
{
	public:
		int data;
		node *next;
		
		node(int value)
		{
			data=value;
			next=NULL;
		}
		
};
int main()
{
	int arr[]={2,1,2,1,2,0};
	node*head,*temp;
	head=NULL;
	for(int i=0;i<6;i++)
	{
		if(head==NULL)
		{
			head=new node(arr[i]);
			temp=head;
		}
		else
		{
			temp->next=new node(arr[i]);
			temp=temp->next;
		}
	}
	
	node*curr=head;
	int count0=0,count1=0,count2=0;
	while(curr)
	{
		if(curr->data==0)
		{
			count0++;
		}
		else if(curr->data==1)
		{
			count1++;
		}
		else
		{
			count2++;
		}
		curr=curr->next;
	}
	curr=head;
	while(count0--)
	{
		curr->data=0;
		curr=curr->next;
	}
	while(count1--)
	{
		curr->data=1;
		curr=curr->next;
	}
	while(count2--)
	{
		curr->data=2;
		curr=curr->next;
	}
	node *op;

	op=head;
	while(op)
	{
		cout<<op->data<<endl;;
		op=op->next;
	}
}
