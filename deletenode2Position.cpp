//delete first node
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

int arr[]={2,5,8,4,8,4,7,};

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
if (head!=NULL)
{ node *temp=head;
head=head->next;
delete temp;
}
node *op;
op=head;
while(op)
{
	cout<<op->data<<" ";
	op=op->next;
}
}
