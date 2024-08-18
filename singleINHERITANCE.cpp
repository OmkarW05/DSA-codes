//SINGLE INHERITANCE 
//In this 

#include <iostream>
using namespace std;
class human
{
	protected :
		string name;
		int age;
		public:
			void worker()
			{
				cout<<"working";
			}
			
};
class student:public human
{
	protected:
	int fee,rollno;
	public :
		student(string name,int age,int fee,int rollno)
		{
			this->name=name;
			this->age=age;
			this->fee=fee;
			this->rollno=rollno;
		}
		void display()
		{
			cout<<name<<" "<<age<<" "<<rollno;
		}
};
int main()
{
	student a1("omkar",3,45,455);
	a1.display
	();
}
