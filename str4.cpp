#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="cbit";
	char str2[]="mgit";
	int i,j,k;
	i=strcmp(str1,"Cbit");
	j=strcmp(str1,str2);
	k=strcmp(str2,"M");
	printf("%d\t%d\t%d\t",i,j,k);
	return 0;
}
