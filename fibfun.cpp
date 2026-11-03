#include<stdio.h>
void fibonoci(int n)
{
	int a=0,b=1,c,i;
	for (i=1;i<=n;i++)
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	}
} int main()
{
	int n;
	printf("enter no of terms");
	scanf("%d",&n);
	fibonoci(n);
	return 0;
}


