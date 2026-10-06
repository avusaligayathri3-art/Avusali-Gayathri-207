#include<stdio.h>
#include<string.h>
int main()
{
	char st1[10],st2[10];
	printf("enter string to reverse");
	gets(st1);
	st2=strrev(st1);
	printf("the reversed string=%s\n",st2);
	return 0;
}
