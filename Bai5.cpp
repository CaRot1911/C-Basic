#include<bits/stdc++.h>
#include<math.h>
using namespace std;
class Circle
{
	private:
		double radius;
	public:
		Circle(double radius)
		{
			this->radius = radius;
		}
		double getArea()
		{
			return pow(radius,2)*3.14;
		}
		double getCircumference()
		{
			return 2*3.14*radius;
		}
};
int main()
{
	Circle c(7);
	cout<<c.getArea()<<endl;
	cout<<c.getCircumference()<<endl;
	return 0;
}

