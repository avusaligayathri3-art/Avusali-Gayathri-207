// program to find reverse of a string without using len function
#include <stdio.h>
#include <string.h>
int main()
{
	int len=0 , i ;
	char str[100];
	printf("Enter a String :");
	gets(str);
	for(i=0; str[i]!='\0' ;i++)
	{
		len++;
	}
	printf("Length of the String : %d \n",len);
	for(i=len-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	return 0 ; 
}
