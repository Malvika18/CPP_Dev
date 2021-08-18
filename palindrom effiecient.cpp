#include <bits/stdc++.h>
#include<iostream>
using namespace std;

string isPalindrom(string str)
{
	int begin = 0;
	int end = str.length()-1;
	while(begin<end)
	{
		if(str[begin]!=str[end])
		{
			cout<<"no";
		}
		begin++;
		end--;
		
	}
	cout<<"Yes";
}

int main()
{
	string str;
	str = "ABCBCA";
	cout<<isPalindrom(str)<<endl;
}
