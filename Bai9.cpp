#include<bits/stdc++.h>
using namespace std;
class Student
{
	private:
		string name;
		char gender;
	public:
		Student()
		{
			name = "Unknown";
			gender = 'u';
		}
		Student(string name)
		{
			this->name = name;
			this->gender = 'u';
		}
		Student(char gender)
		{
			this->name = "Unknown";
			this->gender = gender;
		}
		Student(string name,char gender)
		{
			this->name = name;
			this->gender = gender;
		}
		void display()
		{
			cout<<"Name :" +name<<endl;
			if(gender=='u')
			{
				cout<<"Gender : Unknown"<<endl;
			}
			if(gender =='m')
			{
				cout<<"Gender : Male"<<endl;
			}
			if(gender == 'f')
			{
				cout<<"Gender : Famale"<<endl;
			}
		}
	
};
int main()
{
	Student s1("Quang");
	s1.display();
	Student s2('f');
	s2.display();
	Student s3("Linh",'f');
	s3.display();
	return 0;
}

