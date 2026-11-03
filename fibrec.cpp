#include<stdio.h>
int fib(int n);
int main()
{
	int n;
	printf("enter n value\n");
	scanf("%d",&n);
	printf("fibonoci no of %d if %d\n",n,fib(n));
	return 0;
}
int fib(int n)
{
	
	if(n==1)
	return 0;
	else if (n==2)
	return 1;
	else
	return fib(n-1)+fib(n-2);
}
