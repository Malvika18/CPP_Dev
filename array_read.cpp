#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"how many elements of array"<<endl;
	cin>>n;
	
	int a[n],count = 0,key;
	cout<<"Enter elements of array"<<endl;
	for(int i=0; i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Array is"<<endl;
	for(int i=0; i<n;i++)
	{
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	}
} 
