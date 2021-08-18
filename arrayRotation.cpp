#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//d is the places that we have to shift
	//n is the no. of elements
	int d ;int arr[5];int n;
	cin>>d;
	int temp[d];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<d;i++)
	{
		int temp[i] = arr[i];
	}
	for(k=0;k<n-d-1;k++)
	{
		arr[i]= arr[i+d];
	}
	
	
	
}
