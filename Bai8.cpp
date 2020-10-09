#include<bits/stdc++.h>
using namespace std;
class Array
{
	public:
		static int maxOfArray(int arr[],int n)
		{
			int max = arr[0];
			for(int i=0;i<n;i++)
			{
				if(max<arr[i])
				{
					max = arr[i];
				}
			}
			return max;
		}
		static int minOfArray(int arr[],int n)
		{
			int min = arr[0];
			for(int i=0;i<n;i++)
			{
				if(min>arr[i])
				{
					min = arr[i];
				}
			}
			return min;
		}
		static double maxOfArray(double arr[],int n)
		{
			double max = arr[0];
			for(int i=0;i<n;i++)
			{
				if(max <arr[i])
				{
					max = arr[i];
				}
			}
			return max;
		}
		static double minOfArray(double arr[],int n)
		{
			double min= arr[0];
			for(int i=0;i<n;i++)
			{
				if(min>arr[i])
				{
					min = arr[i];
				}
			}
			return min;
		}
};
int main()
{
	int arr1[] = {3,5,7};
	double arr2[] = {10.9,5.5,7.6};
	cout<<Array::maxOfArray(arr2 ,sizeof(arr2)/sizeof(double))<<endl;
	cout<<Array::minOfArray(arr2 ,sizeof(arr2)/sizeof(double))<<endl;
	cout<<Array::maxOfArray(arr1 ,sizeof(arr1)/sizeof(int))<<endl;
	cout<<Array::minOfArray(arr1 ,sizeof(arr1)/sizeof(int))<<endl;
	return 0;
}

