#include<stdio.h>
#include<string.h>
int main()
{
	char source[]="cbit engineering";
	char target[]="college";
	printf("source string=%s\n",source);
	printf("target string=%s\n",target);
	strcat(source,target);
	printf("target string after strcat()=%s\nn",source);
	return 0;
}
