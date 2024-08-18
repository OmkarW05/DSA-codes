#include <iostream>
#include <vector>

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
	int arr[]={5,4,8,2,3};
	node *head,*temp;
	head=temp=NULL;
	for (int i=0;i<5;i++)
	{
		if (head==NULL)
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
		int k=3;
		if (k==1)
		{
		head=NULL;
		}
	node *curr=head,*pre=NULL;
//	curr=head;
//	pre=NULL;
	int count=1;

	while(curr)
	{
		if(k==count)
		{
			pre->next=curr->next;
			delete curr;
			curr=pre->next;
			count=1;
		}
		else
		{
			pre=curr;
			curr=curr->next;
			count++;
		}
	}
	node *op=head;
	while(op)
	{
		cout<<op->data<<" ";
		op=op->next;
	}
}
	
