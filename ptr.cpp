// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int prod(int arr[],int index,int n)
{
	if(index==n-1)
	return n;
	
	return arr[index]*prod(arr,index+1,n);
}

int main() {
   int arr[]={8,5,4,2,7};
   cout<<prod(arr,0,4);
    return 0;
}
