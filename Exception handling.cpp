#include <iostream>
using namespace std;
int main()
{
	int a,b;
	float c ;
	cin>>a>>b;
	
	try{
        if(b==0)
        {
        	throw "divide by 0 is not error";
		}
		c=a/b;
cout<<c;
    }
        catch (const char *e)
        {
        	cout<<"Exception occurs:"<<e;
		}
}
