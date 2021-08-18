#include<iostream>
#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int max_Sum(int arr[],int n,int k)
{
	
    sort(arr,arr+n);
    int sum = arr[0];
    for(int i=1;i<=k;i++)
    {
        if(arr[i]!=arr[0])
        {
            sum+=arr[i];
            k++;
        }
        else{
            sum+=arr[i];
        }
    }
    cout<<sum;
        
}


int main()
{
    
    int arr[]= {2,1,2,5};
    int n = sizeof(arr) / sizeof(arr[0]);
	int hell = max_Sum(arr,4,2);
	cout<<hell;
}

