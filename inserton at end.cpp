#include <iostream>
using namespace std;
class node
{
	public :
		int data;
		node *next;
		
		node(int value)
		{
			data=value;
			next=NULL;
		}
};
int main()
{ int arr[]={2,5,6,7};
	node *head,*temp;
	temp=head=NULL;
	for (int i=0;i<4;i++)
	{
		if (head==NULL)
		{
			head=new node (arr[i]);
			head=temp;
		}
		else
		{
			temp->next=new node(arr[i]);
			temp=temp->next;
		}
	}
node *tem;
tem=head ;
while (tem)
{ cout<<tem->data<<" ";
tem=tem->next;
}
}
