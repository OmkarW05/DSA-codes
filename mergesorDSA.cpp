#include<iostream>
#include<vector>
using namespace std; 
//function of mering a sorted elemets
void merge(int arr[],int start,int mid,int end)
{
	//creating temprory vector for storing sorted array
	vector<int>temp(end-start+1);
 int left=start,right=mid+1,index=0;
 while(left<=mid&&right<=end)
 {
 	if(arr[left]<=arr[right])
 	{
 		temp[index]=arr[left];
 		index++,left++;
	 }
	 else 
	 {
	 temp[index]=arr[right];
	 index++,right++;
}
}
while (left<=mid)
{
	temp[index]=arr[left];
	index++,left++;
}
while (right<=end)
{
	temp[index]=arr[right];
	index++,right++;
}
//after sorting storing element from temp to arr and retrun to int main()
index=0;
while(start<=end)
{
	arr[start]=temp[index];
	start++,index++;
}
 
}
//dividing array till singal digit
void mergesort(int arr[],int start,int end)
{
	if(start==end)
	{
		return;
	}
	int mid=start+(end-start)/2;
	
	mergesort(arr,start,mid);
	mergesort(arr,mid+1,end);
	//calling megre sort for merging in sorted form
	merge(arr,start,mid,end);
}
int main()
{
	int arr[]={2,3,4,5,9,1,7,8,6};
	int start=0;
	int end=8;
	//passing value of arr ,start ,end to megresort function
	mergesort(arr,0,8);
	//printing sort array after functioning
	for (int i=0;i<9;i++)
	{
		cout<<arr[i]<<" ";
	}
}
