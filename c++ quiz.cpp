#include<stdio.h>
int x = 0;
int f1()
{
	x=5;
	return x;
}
int f2()
{
	x=6;
	return x;
}

int main()
{
	int p = f2()+f1();
	printf("%d",x);
	getchar();
	return 0;
}

