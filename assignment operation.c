#include<stdio.h>
int main()
{
	int a,b;
	printf("enter three numbers to perform assignment operation");
	scanf("%d%d",&a,&b);
	printf("%d+=%d\n",a,b,a+=b);
	printf("%d-=%d\n",a,b,a-=b);
	printf("%d*=%d\n",a,b,a*=b);
	printf("%d/=%d\n",a,b,a/=b);
	printf("%d=%d\n",a,b,a%=b);
	return 0;
}
