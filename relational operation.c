#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers to perform relational operation");
	scanf("%d%d,&a,&b");
	printf("%d<%d=%d\n",a,b,a<b);
	printf("%d>%d=%d\n",a,b,a>b);
	printf("%d<=%d=%d\n,a,b,a<=b");
	printf("%d>=%d=%d\n,a,b,a>=b");
	printf("%d==%d=%d\n",a,b,a==b);
	printf("%d!=%d=%d\n",a,b,a!=b);
	printf("note:the result of above if\'1\'is true and \'0\'is false");
	return 0;
}
