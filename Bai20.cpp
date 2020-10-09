#include<bits/stdc++.h>
using namespace std;
class Person
{
	private:
		string name;
		int age;
		string address;
	public:
		Person(string name,int age,string address)
		{
			this->name = name;
			this->age = age;
			this->address = address;
		}
		string getName()
		{
			return name;
		}
		void getName(string name)
		{
			this->name = name;
		}
		int getAge()
		{
			return age;
		}
		void setAge(int age)
		{
			this->age = age;
		}
		string getAddress()
		{
			return address;
		}
		void setAddress(string address)
		{
			this->address = address;
		}
		void display()
		{
			cout<<"Name :"<<name<<endl;
			cout<<"Age :"<<age<<endl;
			cout<<"Address :"<<address<<endl;
		}
};
class Student :public Person
{
	private:
		double gpa;
	public:
		Student(string name,int age,string address,double gpa) :Person(name,age,address)
		{
			this->gpa = gpa;
		}
		void setGpa(double gpa)
		{
			this->gpa = gpa;
		}
		double getGpa()
		{
			return gpa;
		}
		void display()
		{
			Person::display();
			cout<<"GPA :"<<gpa<<endl;
		}
};
class Teacher : public Person
{
	private:
		int salary;
	public:
		Teacher(string name,int age,string address,int salary) : Person(name,age,address)
		{
			this->salary = salary;
		}
		int getSalary()
		{
			return salary;
		}
		void setSalary(int salary)
		{
			this->salary = salary;
		}
		void display()
		{
			Person::display();
			cout<<"Salary :"<<salary<<endl;
		}
};
int main()
{
	Student s("Khanh",23,"Ha Noi",9.3);
	s.display();
	Teacher t("Tung",34,"Ha Noi",1700);
	t.display();
	return 0;
}

