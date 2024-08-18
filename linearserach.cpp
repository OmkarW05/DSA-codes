#include <iostream>
using namespace std;
int linear(int arr[],int index,int n,int  x)
{
	if(index==n)
	return 0;
	if(arr[index]==x)
	return index;
	
	return linear(arr,index+1,n,x);
	
}
int main()

{
	int arr[]={1,2,6,4,5};
	int x=5;
cout<<linear(arr,0,5,x);
}
