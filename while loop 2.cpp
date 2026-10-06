#include<stdio.h>
main()
{
	int i,n,sum;
	printf("enter n value");
	scanf("%d",&n);
	i=1;sum=0;
	while(i<=n)
	{
		sum=sum+1;
		i=i+1;
	}
	printf("sum of n number=%d",sum);
}

