//tower of honie 
#include<iostream>
using namespace std;
void toh(int n,int sour,int helper,int desti)
{
	if(n==1)
	{
		cout<<"move disk"<<" "<<n<<" "<<"from"<<" "<<sour<<" "<<"to"<<" "<<desti<<endl;
		
		return;
	}
	
	toh(n-1,sour,desti,helper);
	cout<<"move disk"<<" "<<n<<" "<<"from"<<" "<<sour<<" "<<"to"<<" "<<desti<<endl;
	toh(n-1,helper,sour,desti);
}
int main ()
{
	int n=3;
	int sour=1;
	int helper=2;
	int desti=3;
	toh(n,sour,helper,desti);
}
