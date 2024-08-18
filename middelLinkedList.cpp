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
	int arr[]={5,4,8,2,3,7,2,6,5};
	node *head,*temp;
	head=temp=NULL;
	for (int i=0;i<9;i++)
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
	int count=0;
	vector<int>ans;
	node *op=head;
	while(op)
	{count++;
	ans.push_back(op->data);
	op=op->next;
	
	}
     int c=count/2;
     cout<<ans[c];


}
