#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int rotate(int arr[],int n,int k)
{
	for(int i=0;i<k;i++)
	{
		
		int temp = arr[n-1];
		for(int j=n-1;j>0;j--)
		{
			arr[j] = arr[j-1]; 
		}
		arr[0] = temp;
	
	}
	
}

int main()
{
    int t ;
    cin>>t;
    int n , k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rotate(arr,n,k);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
