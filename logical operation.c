#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three numbers to perform logical operation\n");
	scanf("%d%d%d,&a,&b,&c");
	printf("(%d>%d)&&(%d>%d)=%d\n",a,b,a,c,(a>b)&&(a>c));
	printf("(%d>%d)||(%d>%d)=%d\n,a,b,a,c,(a>b)||(a>c)");
	printf("!(%d>%d)=%d\n",a,b,!(a>b));
	printf("note:the result of the above if \'1\'is true and \'0\'is false");
	return 0;
}

