#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int res = max(a,b);
	while(res>0){
		if(res%a==0 && res%b==0)
		{
			break;
		}
		res++;
	}
	cout<<res<<endl;
}
