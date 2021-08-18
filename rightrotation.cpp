#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int rotate(int arr[],int n,int k)
{
	for(int i=0;i<k;i++)
	{
		
		int temp = arr[n-1];
		for(int i=n-1;i>0;i--)
		{
			arr[i] = arr[i-1]; 
		}
		arr[0] = temp;
	
	}
	
}


int main()
{
	int arr[] = {1,2,3,4,5};
	int n = 5;
	int k = 2;
	rotate(arr,n,k);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	
	
}
