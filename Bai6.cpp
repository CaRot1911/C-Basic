#include<bits/stdc++.h>
using namespace std;
class Math
{
	public:
		static int abs(int x)
		{
			return (x<0?-x:x) ;
		}
		static int add(int x,int y)
		{
			return x+y;
		}
		static int subtract(int x ,int y)
		{
			return x-y;
		}
		static int min(int x,int y)
		{
			return x<y?x:y;
		}
		static int max(int x,int y)
		{
			return x>y?x:y;
		}
		static int pow(int x,int y)
		{
			int p = 1;
			for(int i=0;i<y;i++)
			{
				p *= x;
			}
			return p;
		}
		
		
		
};
int main()
{
	cout<<Math::abs(-10)<<endl;
	cout<<Math::add(2,3)<<endl;
	cout<<Math::max(2,3)<<endl;
	cout<<Math::min(2,3)<<endl;
	cout<<Math::subtract(2,3)<<endl;
	cout<<Math::pow(2,3)<<endl;
	return 0;
}

