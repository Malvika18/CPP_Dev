//TAKEN  3 string and we have to print the output below.

#include <bits/stdc++.h>
#include<iostream>
using namespace std;

string isPalindrom(string str)
{
	
	string p = str;
	reverse(p.begin(),p.end());
	if(str==p)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
	
}

int main()
{
	int t;
	cin>>t;
	string str;
	while(t--)
	{
		cin>>str;
		cout<<isPalindrom(str)<<endl;
	}
	
		
}
