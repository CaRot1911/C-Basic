#include<bits/stdc++.h>
using namespace std;
class Animal
{
	public:
		virtual void sould()
		{
			cout<<"some one"<<endl;
		}
};
class Dog : public Animal
{
	public:
		void sould()
		{
			cout<<"bow now"<<endl;
		}
};
class Cat: public Animal
{
	public:
		void sould()
		{
			cout<<"meow meow"<<endl;
		}	
};
class Duck : public Animal
{
	public:
		void sould()
		{
			cout<<"quack quack"<<endl;
		}
};
int main()
{
	Animal* animals[4];
	animals[0] = new Animal();
	animals[1] = new Dog();
	animals[2] = new Cat();
	animals[3]  = new Duck();
	for(int i=0;i<4;i++)
	{
		animals[i]->sould();
	}
	return 0;
}

