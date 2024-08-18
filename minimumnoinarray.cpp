#include<iostream>
using namespace std;
int minr(int arr[],int index,int n)
{
	
	if (index==n)
	return n;
	return max(arr[index],minr(arr,index+1,n));
}
int main()

{
	int arr[]={2,4,5,8,9};
	cout<<minr(arr,0,5);
}
