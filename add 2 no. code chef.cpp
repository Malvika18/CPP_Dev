#include <bits/stdc++.h> 

using namespace std;

int main() {
	// Read the number of test cases.
	int T;int N,arr[N];
	cin>>T;
	while (T--) {
		cin>>N;
		
		// Read the input a, b
		for(int i=0;i<N;i++)
		{
			cin>>arr[i];
		}
		
		int count  = 0;
		for(int i=0;i<N;i++)
		{
			count += arr[i];
		}
		
		cout<<count<<endl;	

	
	}

	return 0;
}
