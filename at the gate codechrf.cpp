#include<iostream>
#include <bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		char arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=n-1;i>n-k;i--)
		{
			if(arr[i]=='H')
			{
				for(int j=0;j<i;j++)
				{
					if(arr[j]=='H')
					{
						arr[j]=='T';
					}
					else{
						arr[j]=='H';
					}
				}
			}
		}
		int count;
		for(int i=0;i<n-k;i++)
		{
			if(arr[i]=='H')
			{
				count++;
			}
			
		}
		cout<<count<<endl;
	}
}
