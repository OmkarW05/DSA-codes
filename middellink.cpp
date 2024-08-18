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
	node *slow,*fast;
	slow=head;
	fast=head;
	while(fast&&fast->next)
	{
		slow=slow->next;
		fast=fast->next->next;
	}
	cout<<slow->data;
}
