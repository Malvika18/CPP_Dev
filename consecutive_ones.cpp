#include<iostream>
#include<cmath>
using namespace std;

int maxConsecutiveOnes(int arr[],int n)
{
	int res = 0;
	for(int i=0;i<n;i++)
	{
		int crr = 0;
		for(int j=i;j<n;j++)
		{
			if(arr[j]==1)
			{
				crr++;
			}
			else
			{
				break;
			}
		}
		res = max(res,crr);
	}
	return res;
}


int main()
{
	int   arr[] = {0,1,1,0,1};
	int n = 5;
	cout<<maxConsecutiveOnes(arr,n);
}
