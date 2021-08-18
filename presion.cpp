#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include <iomanip>
#include<iostream>
using namespace std;
int main()
{
	int x;
	float y;
	cin>>x;
	cin>>y;
	cout << fixed << showpoint;
    cout << setprecision(2);
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


