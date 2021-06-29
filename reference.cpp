#include<iostream>
using namespace std;

int sum(int* , int*);
int main()
{
	int a = 6 , b = 7;
	int s = sum(&a,&b);
	cout<<"sum is "<<s;
		
}

int sum(int*p,int*q)
{
	return(*p + *q);
}
