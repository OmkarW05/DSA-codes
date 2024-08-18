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
			
		}
		
};
 node* creatinglinkedlist(int arr[],int index,int size)
 {
 	if (index==size)
 	{
 		return NULL;
	 }
	 
	 node *temp;
	 temp= new node (arr[index]);
	 temp->next=creatinglinkedlist(arr,index+1,size);
	 return temp;
 }
 node* creatinglinkedlist1(int arr1[],int index,int size)
 {
 	if (index==size)
 	{
 		return NULL;
	 }
	 
	 node *temp;
	 temp= new node (arr1[index]);
	 temp->next=creatinglinkedlist(arr1,index+1,size);
	 return temp;
 }
int main()
{  int arr[]={2,1,3,4};
int arr1[]={2,5,6,4};
 node *head,*good;
head=creatinglinkedlist(arr,0,4);
good=creatinglinkedlist1(arr1,0,4);
node *tem=head ;
while (tem)
{ cout<<tem->data<<" ";
tem=tem->next;
}
node *temx=head ;
while (temx)
{ cout<<temx->data<<" ";
temx=temx->next;
}
}
