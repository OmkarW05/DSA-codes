#include <iostream>
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
	int arr[]={2,4,8,6,5,1,7};
	int x=1;
	node *head,*temp;
	head=temp=NULL;
    for(int i=0;i<7;i++)
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
	
if(x==1)
{
	node *temp=head;
	head=head->next;
	delete temp;
} 
else
{
    node *current=head;
	node *pre=NULL;
	x--;
	while (x--)
	{   pre=current;
		current=current->next;
	}
	pre->next=current->next;
	delete current;
}
	
	node *op;
	op=head;
	while (op)
	{
		cout<<op->data<<" ";
		op=op->next;
	}
}
