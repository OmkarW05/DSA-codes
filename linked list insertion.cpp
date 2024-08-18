#include <iostream>
using namespace std;
class node
{
	public :
		int data;
		node *next;
		
		node (int value)
		{
			data=value;
			next=NULL;
			//cout<<data<<next;
			
		}
		
};
int main()
{  int arr[]={2,1,3,4};
	node *head;
	head=NULL;
	for (int i=0;i<4;i++)
	{
	if (head==NULL)
	{ 
		head=new node(arr[i]);
		
	
	}
	else 
	 { node *temp;
	   temp=new node(arr[i]);
	   temp->next=head;
	   head=temp;
	 }
	
} 
node *temp=head ;
while (temp)
{ cout<<temp->data<<" ";
temp=temp->next;
}
	  
	
}
