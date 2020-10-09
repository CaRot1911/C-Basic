#include<bits/stdc++.h>
using namespace std;
class Student
{
	private:
		int id;
		string name;
		int age;
		string address;
		int score;
	public:
		Student()
		{
		}
		Student(int id,string name,int age,string address,int score)
		{
			this->id = id;
			this->name = name;
			this->age = age;
			this->address = address;
			this->score = score;
		}
		void setId(int id)
		{
			this->id = id;
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
		void setAge(int age)
		{
			this-> age = age;
		}
		int getAge()
		{
			return age;
		}
		void setAddress(string address)
		{
			this ->address = address;
		}
		string getAddress()
		{
			return address;
		}
		void setScore(int score)
		{
			this->score = score;
		}
		int getScore()
		{
			if(score>10)
			{
				score = 10;
			}
			if(score<0)
			{
				score = 0;
			}
			return score;
		}
		
};
int main()
{
	Student s(1001,"Trung",24,"Ha Noi",5);
	cout<<s.getId()<<endl;
	cout<<s.getName()<<endl;
	cout<<s.getAge()<<endl;
	cout<<s.getAddress()<<endl;
	cout<<s.getScore()<<endl;
	s.setScore(15);
	cout<<s.getScore()<<endl;
	s.setScore(-7);
	cout<<s.getScore()<<endl;
	return 0;
}

