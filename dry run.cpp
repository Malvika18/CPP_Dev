#include<iostream>
using namespace std;
int main()
{
	int n;
	int m;
	cin>>m>>n;
	int a[n][m];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	11
	14
	
	int k=0;
	while(k<m)
	{
		for(int i=0;i+k<m;i++)
		{
			cout<<a[i][k+i]<<" ";
		}
		k++;
	}
	return 0;
}

