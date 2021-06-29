#include<iostream>
using namespace std;

int M=3;
int N=3;

int print(int arr[3][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr[i][j]<<endl;
		}
	}
}

int main()
{
	int arr[3][3] = {{1,2,3},{4,5,6}};
	print(arr);
	return 0;
}
