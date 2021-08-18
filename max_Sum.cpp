#include<iostream>
#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int max_Sum(int arr[],int n)
{
    sort(arr,arr+n,greater<int>());
//    int k;
//    int sum = 0;
//    for(int i=0;i<=k;i++)
//    {
//    	int sum = sum+arr[i];
//	}
//	cout<<sum;
    for(int i=1;i<n;i++)
    {
    	cout<<arr[i];
	}
}

int main()
{
//	int t;
//	cin>>t;
//	int n,k;
//	cin>>n>>k;
int n;
cout<<"n = ";
cin>>n;

	int arr[7];
	for(int i=1;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<max_Sum(arr,4);

}
