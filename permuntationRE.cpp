#include<iostream>
#include<vector>
using namespace std;
void permute(vector<int> &v ,vector<vector<int> >&ans,int index)
{ if(index==v.size())
{
	ans.push_back(v);
	return;
}
	
	for(int i=index;i<v.size();i++)
	{
		swap(v[i],v[index]);
		permute(v,ans,index+1);
		swap(v[i],v[index]);
	}
}
int main()
{
	vector<int>v={1,2,3};
	vector<vector<int> >ans;
	int index=0;
	permute(v,ans,index);
	for(int i=0;i<ans.size();i++)
	{
		for(int j=0;j<ans[i].size();j++)
		{
			cout<<ans[i][j]<<" ";
		}cout<<endl;
	}
}
