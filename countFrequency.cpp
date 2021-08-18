#include<iostream>
#include<cmath>
using namespace std;

int countFreq(int arr[],int n)
{

	for(int i=0;i<n;i++)
	{
		int count = 1;
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		cout<<arr[i]<<" "<<count<<endl;
	}
}

int main()
{
	int arr[]={10,10,10,25,30,30};
	int n=7;
	countFreq(arr,n);
	return 0;
}
