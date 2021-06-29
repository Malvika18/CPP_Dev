#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	int a[5],n,i;
	cin>>n;
	cout<<"Array"<<endl;
	for(i=1;i<=n;i++)
	cin>>a[i];
	cout<<"Reverse of array"<<endl;
	for(i=n;i>=1;i--)
	cout<<a[i];
}
