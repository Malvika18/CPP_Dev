#include<iostream>
using namespace std;

int main()
{
	int n;
	int rev = 0;
	cin>>n;
	int temp = n;
	while(temp!=0)
	{
		int last_digit = temp%10;
		rev = rev*10 + last_digit;
		temp = temp/10;	
	}
	
	if(rev==n)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
}
