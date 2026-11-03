#include<stdio.h>
int prime(int n)
{
	int i,c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	return 1;
	else return 0;
}
int main()
{
	int x;
	printf("enter a number");
	scanf("%d",&x);
	if(prime(x)==1)
	printf("%d is a prime number",x);
	else
	printf("%d is not a prime number",x);
	return 0;
}
