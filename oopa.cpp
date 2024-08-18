#include <iostream>
using namespace std;
class customer
{
	string name;
	int balance;
	int Tbal;
	public:
		customer(string a,int b,int Tbal)
		{
			name=a;
			balance=b;
		this->Tbal+=b;
		}
		void deposite(int amount)
		{
			
			if(amount>0)
			{
				balance+=amount;
			    Tbal+=amount;
				cout<<"OK"<<endl<<"Your current balance is : "<<Tbal<<endl;
			}
			else
			{
				cout<<"invalid value";
			}
			
		}
		void withdraw (int value,int pass)
		{
			if(pass==1234)
			{
				if (value<=balance&&value>0)
				{
					balance-=value;
					Tbal-=value;
					cout<<value<<" Withdrawal successfully"<<endl<<"Remainimg balance : "<<Tbal;
				}
				else 
				{
					cout<<"input error or insufficent balance,try later!";
				}
			}
			else
			{
				cout<<"Incorrect password";
			}
		}
};
int main()
{
	string n;
	int b=230;
	int t=0;
	cout<<"Welcome transiction recipt page"<<endl;
	cout<<"Enter your Name as per your bank details: ";
	cin>>n;
	if(n=="Omkar")
	{
	cout<<"Accessed successfully"<<endl;}
	else
	{
		cout<<"Invalid";
		return 0;
	}
	cout<<"Your total balance is : "<<" "<<b<<endl;
	
	int amount;
    cout<<"Enter the amount you want to deposite: ";
    cin>>amount;
	customer A1(n,b,t);
	A1.deposite(amount);
	int v,p;
	cout<<"Enter amount do you want to withdraw :"<<endl;
	cin>>v;
	cout<<"for withdraw money enter password:"<<endl;
	cin>>p;
	A1.withdraw(v,p);
}
