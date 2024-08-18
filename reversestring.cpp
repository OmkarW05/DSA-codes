#include<iostream>
using namespace std;
void reverse(string str,int start,int end)

{
	if(start>=end)
	return  ;
	//swapping of charcters
	swap(str[start],str[end]);
	//char c =str[start];
	//str[start]=str[end];
	//str[end]=c;
	return reverse(str,start+1,end-1);
}
int main()
{
	string str="omkar";
reverse(str,0,4);
cout<<str;
}
