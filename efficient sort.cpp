#include<iostream>
#include<cmath>
using namespace std;

bool isSorted(int arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		if(arr[i]<arr[i-1])
		{
			cout<<"no";
		}
	}cout<<"Yes";
}

int main()
{
	int arr[]={5,6,8,4};
	int n = 4;
	cout<<isSorted(arr,4) ? "Yes" : "no";
}
