#include<iostream>
using namespace std;
class node
{
	public :
		int data;
		node * next;
		node(int value)
		{
			data=value;
			next=NULL;
		}
};
int main()
{
	int arr[]={2,1,3,6,5,4,5,4,5};
	int count=1;
	node *head,*temp;
	head=temp=NULL;
	for(int i=0;i<9;i++)
	{
	if(head==NULL)
	{
		head=new node (arr[i]);
		temp=head;
	}
	else
	{
		temp->next=new node(arr[i]);
		temp=temp->next;
		count++;
	}

}
		node *op;
	op=head;
	while(count--)
	{
		if(op->next==NULL)
		{
			op->next=head;
		}
		op=op->next;
	}
	node *opp;
	opp=head;
	while(opp)
	{
		cout<<opp->data;
		opp=opp->next;
	}
	cout<<endl<<count;
}
