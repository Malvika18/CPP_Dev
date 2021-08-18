#include<iostream>
using namespace std;

int isSorted(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				cout<<"no";
			}
			
		}
	}
	cout<<"yes";
}

int main()
{
	int arr[] = {5,6,8,4,3};
	cout<<isSorted(arr,5)?"yes":"no";
}
