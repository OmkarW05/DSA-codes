//making lower case letter to upper case
#include <iostream>
using namespace std;
void lowtoup(string &str,int index)
{
	if(index==-1)
	return;
	
	str[index]='A'+(str[index]-'a');
	return lowtoup(str,index-1);
}

int main()
{
	string str="omkaR";
	lowtoup(str,4);
	cout<<str;
}
