//acsses from one anthore
#include <iostream>
using namespace std;
class person 
{
	protected :
	
		string name;
		
		public:
			void give()
			{
			cout<<name;
			}
			
};
class emp:public person
{
	protected :
		int salar;
		public:
			
			void sal()
			{
				cout<<name<<salar;
			}
};
class head :public emp
{
	
	protected:
	int id;
	public:
		head(string name,int salar,int id)
		{
			this->name=name;
			this->salar=salar;
			this->id=id;
		}
		void display()
		{
			cout<<id<<name<<salar;
		}
};
int main()
{
	head a1("omkar",200,44);
	a1.display();
}
