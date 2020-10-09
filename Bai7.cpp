#include<bits/stdc++.h>
using namespace std;
class Array
{
	public :
		static int sumOfArray(int arr[],int n)
		{
			int sum = 0;
			for(int i=0;i<n;i++)
			{
				sum += arr[i];
			}
			return sum;
		}
		static double sumOfArray(double arr[],int n)
		{
			double sum = 0;
			for(int i=0;i<n;i++)
			{
				sum += arr[i];
			}
			return sum;
		}
};
int main()
{
	int arr1[]={1,2,3};
	double arr2[]={3.5,0.5,1.6};
	cout<<Array::sumOfArray(arr1,sizeof(arr1) /sizeof(int))<<endl;
	cout<<Array::sumOfArray(arr2,sizeof(arr2) /sizeof(double))<<endl;
	return 0;
}

