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
{  int arr[]={2,1,9,4,5,9,7,3,5};
int c;
cout<<"where to be insert : ";
cin>>c;
int b;
cout<<"value to be insert : ";
cin>>b;
int x=c-1;
	node *head,*temp;
	head=temp=NULL;
	for (int i=0;i<9;i++)
	{
	if (head==NULL)
	{ 
		head=new node(arr[i]);
	    temp=head;
	     if(x==0)
		{
			//temp->next=new node(arr[i]);
	   //temp=temp->next;
		 temp->next=new node(b);
	   temp=temp->next;
		
	
	}
	 
	  	    
}
	else if (i==x)
	 { 
	   temp->next=new node(arr[i]);
	   temp=temp->next;
	   temp->next=new node(b);
	   temp=temp->next; 
	   
	  
	 }
	 else 
	  { 
	   temp->next=new node(arr[i]);
	   temp=temp->next;
	   //new node(3);
	   
	 }
	
} 
cout<<" modified linked list by adding "<< b<< " after "<<c<<" "<<"position "<<endl;
node *tem=head ;
while (tem)
{ cout<<tem->data<<" ";
tem=tem->next;
}
	  
	
}
