#include<iostream>
#include<cmath>
using namespace std;

int leaders(int arr[],int n)
{
	for(int i = 0;i<n;i++)
	{
		bool flag = false;
		
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]<=arr[j])
			{
				flag = true;
				break;
			}
		}
		
		if(flag == false)
		{
			cout<<arr[i]<<" ";
		}
	}
}

int main()
{
	int arr[] = {7,8,4,10,6,2,5};
	int n = 7;
	leaders(arr,n);
}
