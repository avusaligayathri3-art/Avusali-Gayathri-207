#include<stdio.h>
#include<string.h>
int main()
{
	char st[100],;
	int i;
	printf("enter a string\n");
	scanf("%s",st);
	printf("the string is:\n");
	 for(i=0;st[i]!='\0';i++)
	 printf("%c",st[i]);
	 return 0;
}
