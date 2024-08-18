#include <iostream>
using namespace std;
int print(int arr[],int index,int n,int sum)
{ 
	if(index==n)
	{
		if(sum==0)
		return 1;
		else 
		return 0;
	}		
return print(arr,index+1,n,sum)+print(arr,index+1,n,sum-arr[index]);
}
int main(){
	int arr[]={2,5,6,1};
	int s=0;
 cout<<print(arr,0,4,8);	
 
}
