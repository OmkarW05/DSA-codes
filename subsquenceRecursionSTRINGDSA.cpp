#include<iostream>
#include<vector>
using namespace std;
void subsq(string arr,int index,int n,vector<string>&ans,string temp)
{
	if(index==n) 
{
		ans.push_back(temp);
	return;
	}
	
	subsq(arr,index+1,n,ans,temp);
	temp.push_back(arr[index]);
	subsq(arr,index+1,n,ans,temp);
	
}
int main()
{
	string arr="abc";
	int n=3;
	vector<string>ans;
	string temp;
	subsq(arr,0,n,ans,temp);
	for(int i=0;i<ans.size();i++)
	{
	cout<<ans[i]<<" ";
	cout<<endl;
	}
	
	
}
