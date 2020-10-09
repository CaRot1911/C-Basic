#include<bits/stdc++.h>
using namespace std;
class Employee
{
	private:
		int id;
		string firstName;
		string lastName;
		int salary;
	public:
		Employee(int id,string firstName,string lastName,int salary)
		{
			this->id = id;
			this->firstName = firstName;
			this->lastName = lastName;
			this->salary = salary;
		}
		void setId(int id)
		{
			this->id = id;
		}
		int getId()
		{
			return id;
		}
		void setfirstName(string firstName)
		{
			this->firstName = firstName;
		}
		string getfirstName()
		{
			return firstName;
		}
		void setlastName(string lastName)
		{
			this->lastName = lastName;
		}
		string getlastName()
		{
			return lastName;
		}
		void setSalary(int salary)
		{
			this->salary = salary;
		}
		int getSalry()
		{
			return salary;
		}
		string getFullName()
		{
			return firstName+" "+lastName;
		}
		
};
int main()
{
	Employee e(1,"Kien","Hoang",1000);
	cout<<"Id : "<<e.getId()<<endl;
	cout<<"Name : "<<e.getFullName()<<endl;
	cout<<"Salary : "<<e.getSalry()<<endl;
	return 0;
}

