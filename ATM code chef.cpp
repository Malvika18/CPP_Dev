#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	float y;
	cin>>x;
	cin>>y;
	if(x%5==0 && x<y)
	{
		cout<<y-x-(0.50)<<endl;
	}
	else
	{
		cout<<y;
	}
	
	return 0;
}
