#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[5];int k=3;
	int n;
	cin>>n;
	cin>>k;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	
	
	int max = -1,sum = 0;
	for(int i=0;i+k-1<n;i++)
	{
		sum =0;
		for(int j=i;j<i+k;j++)
		{
			sum= sum+arr[j];
		}
		
		if(sum>max)
		{
			max = sum;
		}
	}
	
	cout<<max;
}
