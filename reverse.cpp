#include<iostream>
using namespace std;

int reverse(int arr[],int n)
{
	int low=0;  int high = n-1;
	while(low<high)
	{
		int temp = arr[low];
		arr[low] = arr[high];
		arr[high] = temp;
		low++;
		high--;
	}
}

int main()
{
	int arr[] = {10,5,7,30};
	int n = 4;
	cout<<"Before"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;
	
	reverse(arr,4);
	
	cout<<"After"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
