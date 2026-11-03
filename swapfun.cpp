#include<stdio.h>
void swap(int a,int b);
int main()
{
	int x,y;
	printf("enter two values\n");
	scanf("%d%d",&x,&y);
	swap(x,y);
	return 0;
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("a=%d\n b=%d\n",a,b);
}
