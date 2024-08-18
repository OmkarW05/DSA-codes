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
	node *C=head;
	int count=0;
	int n=2;
	while(C)
	{
		count++;
		C=C->next;
	}
	int i=count-n;
	cout<<i<<endl;
	node *op,*pre;
	op=head;
	pre=NULL;
	while(i--)
	{
		pre=op;
		op=op->next;
	}
	pre->next=op->next;
	delete op;

	//node *good;
	pre=head;
	while(pre)
	{
		cout<<pre->data<<" ";
		pre=pre->next;
	}
}
