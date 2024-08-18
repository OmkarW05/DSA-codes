//Function overloading ,here same function with same name but diff parameters,called function overloading
#include <iostream>
using namespace std;
class area 
{
	public:
		int calculate(int r,int a)//circle area
		{
			return r+a;
			
		}
		//float calculate(int r)  //circle area     <-we cant use same function with same parameters this should be diff in paramters
		//{
		//	return 3.14*r*r;
		
		//}
		int calcu (int l,int b)//rectangle area
		{
			return l+b;
		}
};
int main()
{
	area A1,A2;
	cout<<A1.calculate(3,4);
	cout<<"+i";
	cout<<A2.calcu(2,6);
	//cout<<A2.calculate(8,3);
}
