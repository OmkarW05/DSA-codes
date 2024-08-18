// many parent class and one child class
#include <iostream>
using namespace std;
class teacher
{
	protected :
		string name;
		int id;
		public :
			void basic()
			{
				cout<<name<<" "<<id<<endl;
			}
};
class youtuber
{
	protected :
	int subs;
	public:
		void no()
		{
			cout<<subs<<endl;
		}
		
		
};
class professions: public teacher , public youtuber
{
	protected:
		int code;
		public:
			professions(string name,int id,int subs,int code)
			{
				this->name=name;
				this->id=id;
				this->subs=subs;
				this->code=code;
			}
			void display()
			{
				cout<<name<<" "<<id<<" "<<code<<" "<<subs;
			}
	
	
	
};
int main()
{
	professions a1("omkar",23,5000,123);
	a1.basic();
	a1.no();
	a1.display();
}
