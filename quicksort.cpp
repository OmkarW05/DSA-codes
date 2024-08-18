#include <iostream>
using namespace std;
int big(int arr[],int start,int end)
{
int posi=start;
for (int i=start;i<=end;i++)
{
	if(arr[i]<=arr[end])
	{
	swap(arr[i],arr[posi]);
		posi++;
	}
	
	}	return posi-1;
}
void quicksort(int arr[],int start,int end)
{
	if(start>=end)
	return;
	
	int privot=big(arr,start,end);
	quicksort(arr,start,privot-1);
	quicksort(arr,privot,end);
}
int main(){
	int arr[]={5,4,1,3,2,1,7,4};
	quicksort(arr,0,7);
	for(int i=0;i<=7;i++)
	{
		cout<<arr[i];
	}
}
