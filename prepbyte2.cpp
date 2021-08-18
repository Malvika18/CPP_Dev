#include <iostream>
using namespace std;
  
int main()
{
    char ch;
    cin>>ch;
    int i,j;
    int n=5;
    for(i=1;i<=n;i++)
    {
      for(j=1;j<=i;j++)
      cout<<j;
      for(j=(n-i)*2;j>=1;j--)
      cout<<" ";
      for(j=i;j>=1;j--)
      cout<<j;
      cout<<endl;
    }
    return 0;
}
