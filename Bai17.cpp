#include<bits/stdc++.h>
using namespace std;
class Account
{
	private:
		int id;
		string name;
		int balance;
	public:
		Account(int id,string name)
		{
			this->id = id;
			this->name = name;
		}
		Account(int id,string name,int balance)
		{
			this->id = id;
			this->name = name;
			this->balance = balance;
		}
		int getId()
		{
			return id;
		}
		void setName(string name)
		{
			this->name = name;
		}
		string getName()
		{
			return name;
		}
		int getBalance()
		{
			return balance;
		}
		void deposit(int amount)
		{
			balance += amount;
		}
		void withdraw(int amount)
		{
			if(balance>=amount)
			{
				balance -= amount;
			}
			else
			{
				cout<<"That amount exceeds your current balance"<<endl;
			}
		}
		void display()
		{
			cout<<"ID: "<<id<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Balance: "<<balance<<endl;
		}
};
int main()
{
	Account a(1000,"Tuan",2000);
	a.display();
	a.deposit(600);
	a.display();
	a.withdraw(3000);
	a.display();
	return 0;
}

