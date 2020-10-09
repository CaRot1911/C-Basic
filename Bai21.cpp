#include<bits/stdc++.h>
using namespace std;
class Employee
{
	private:
		string name;
		int salary;
	public:
		Employee(string name,int salary)
		{
			this->name = name;
			this->salary = salary;
		}
		void setName(string name)
		{
			this->name = name;
		}
		string getName()
		{
			return name;
		}
		void setSalary(int salary)
		{
			this->salary = salary;
		}
		int getSalary()
		{
			return salary;
		}
		void display()
		{
			cout<<"Name :"<<name<<endl;
			cout<<"Salary :"<<salary<<endl;
		}
};
class Manager :public Employee
{
	private:
		int bonus;
	public :
		Manager(string name,int salary,int bonus) : Employee(name,salary)
		{
			this->bonus = bonus;
		}
		void setBonus(int bonus)
		{
			this->bonus = bonus;
		}
		int getBonus()
		{
			return bonus;
		}
		int getSalary()
		{
			return Employee::getSalary()+bonus;
		}
		void display()
		{
			cout<<"Name :"<<getName()<<endl;
			cout<<"Salary :"<<getSalary()<<endl;
		}
};
int main()
{
	Manager m("Binh",2500,1600);
	m.display();
	return 0;
}

