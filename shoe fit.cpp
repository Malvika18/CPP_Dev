#include<iostream>
#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main()

{
	int T,A,B,C;
	cin>>T;
	while(T--)
	{
		int sum = 0;
		cin>>A>>B>>C;
	

		sum = A+B+C;
		if(sum==0||sum==3)
		{
			cout<<'0'<<endl;
		}
		else
		{
			cout<<'1'<<endl;
		}	
	}

	
	
}
