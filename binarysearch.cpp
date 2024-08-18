#include<iostream>
using namespace std;
int binary(int arr[],int start,int end,int x)
{
	if(start>end)
	return 0;
	int mid=start+(end-start/2);
	if(arr[mid]==x)
	{
		return mid;
	}
	else if (arr[mid]>x)
	return binary(arr,start,mid-1,x);
	else 
	return binary(arr,mid+1,end,x);
}
int main(){
	int arr[]={1,2,3,5,6};
	int x=5;
	
	 cout<<binary(arr,0,4,x);
}
