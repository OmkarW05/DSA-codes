//delete last node
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
int main(){

int arr[]={2,5,8,4};

node*head,*temp;
head=temp=NULL;
for(int i=0;i<4;i++)
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
node *current=head;
node *pre=NULL;
while(current->next!=NULL)
{ pre=current;
	current=current->next;
	
	
}
delete current;
pre->next=NULL;
node *op;
op=head;
while(op)
{
	cout<<op->data<<" ";
	op=op->next;
}
}
