#include<iostream>
using namespace std;
int even(int arr[],int index,int n)
{ if(index==n-1)
 return 1;
	
	if(arr[index]%2!=0)
	return 1+even(arr,index+1,n);
	else
	return  even(arr,index+1,n);
}
int main ()
{
	int arr[]={1,2,3,4,5,6,3,7,9};
cout<<even(arr,0,9);
}

