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
	int arr[]={2,2,3,3,3,4};
	node*head1,*temp1;
	head1=NULL;
	for(int i=0;i<6;i++)
	{
		if(head1==NULL)
		{
			head1=new node(arr[i]);
			temp1=head1;
		}
		else
		{
			temp1->next=new node(arr[i]);
			temp1=temp1->next;
		}
	}
	int arr2[]={2,2,3};
	node*head2,*temp;
	head2=NULL;
	for(int i=0;i<3;i++)
	{
		if(head2==NULL)
		{
			head2=new node(arr2[i]);
			temp=head2;
		}
		else
		{
			temp->next=new node(arr2[i]);
			temp=temp->next;
		}
	}
	node *head=new node(0);
	node*tail=head;
	while(head1&&head2)
	{
		if(head1->data<=head2->data)
		{
			tail->next=head1;
			head1=head1->next;
			tail=tail->next;
			tail->next=NULL;
		}
		else
			{
			tail->next=head2;
			head2=head2->next;
			tail=tail->next;
			tail->next=NULL;
		}
	}
	if(head1)
	{
		tail->next=head1;
	}
	else
	{
		tail->next=head2;
	}
	head=head->next;
	node *op;

	op=head;
	while(op)
	{
		cout<<op->data<<endl;;
		op=op->next;
	}
}
