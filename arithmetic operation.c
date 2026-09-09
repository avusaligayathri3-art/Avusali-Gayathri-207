#include<stdio.h>
int main()
{
	int a,b,add,sub,mul,mod;
	float div;
	printf("enter two values to perform arithmetic operation\n ");
	scanf("%d%d",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	mod=a%b;
	div=(float) a/b;
	printf("sum=%d\nsubstraction=%d\nmultiplication=%dmod=%d");
	printf("division=%f\n",div);
	return 0;
}
