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
	node *head,*temp;
	head=temp=NULL;
	for (int i=0;i<4;i++)
	{
	if (head==NULL)
	{ 
		head=new node(arr[i]);
	    temp=head;
		
	
	}
//	else if (i==1)
//	// { 
//	   temp->next=new node(3);
//	   temp=temp->next;
//	   
//	 }
	 else 
	  { 
	   temp->next=new node(arr[i]);
	   temp=temp->next;
	   
	 }
	
} 
node *tem=head ;
while (tem)
{ cout<<tem->data<<" ";
tem=tem->next;
}
	  
	
}
