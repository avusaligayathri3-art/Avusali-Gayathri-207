#include<stdio.h>
#include<string.h>
int main()
{
	char source[]="cbit emgineeering";
	char target[20]=" ";
	printf("source string=%s\n",source);
	printf("target string=%s",target);
	strcpy(target,source);
	printf("target string after strcpy()=%s",target);
	return 0;
}
