#include<stdio.h>
int clacLargest(int a, int b)
{
    if(a>b)
    {
        printf("%d is greater than %d",a,b);
    }
    else if(b>a)
    {
        printf("%d is greater than %d",b,a);
    }
    else
        printf("both are same");
        
}

int main()
{
    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    
   clacLargest(n1,n2);
}
