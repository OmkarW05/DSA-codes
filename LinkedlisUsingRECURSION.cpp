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

int main()
{  int arr[]={2,1,3,4};
int x;
cin>>x;
 node *head;
head=creatinglinkedlist(arr,0,4);
node *temp=head;
x--;

while(x--)
{ temp=temp->next;
}
node *temp2= new node(30);
temp2->next=temp->next;
temp->next=temp2;

node *tem=head ;
while (tem)
{ cout<<tem->data<<" ";
tem=tem->next;
}

}
