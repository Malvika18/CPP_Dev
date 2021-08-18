#include<iostream>
using namespace std;

int main()
{
	int i,n;
	int fact = 1;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<fact<<endl;
	
	
	//trailing zero
	
	int res = 0;
	while(fact%10==0)
	{
		res++;
		fact=fact/10;
	}
	cout<<res<<endl;
	
	
}





