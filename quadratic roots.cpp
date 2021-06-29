#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	float a,b,c,d,r1,r2;
	cin>>a>>b>>c;
	d = b*b-(4*a*c);
	if(d<0)
	{
		cout<<"Imaginary number"<<endl;
		
	}
	else
	{
		r1 = ((-b+sqrt(d))/2*a);
		r2 = ((-b-sqrt(d))/2*a);
		cout<<"Roots are "<<r1<<"and"<<r2<<endl;
		
	}
}
