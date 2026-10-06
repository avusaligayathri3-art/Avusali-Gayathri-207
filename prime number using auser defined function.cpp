#include<stdio.h>
int isprime(int n);
int main(){
	int n,flag;
	printf("Enter a number:");
	scanf("%d",&n);
	flag=isprime(n);
	if (flag == 1)
	 printf("%d is aprime number\n",n);
	else
	 printf("%d in not aprime number\n",n);
	 return 0;
}
int isprime(int n){
	int i;
	if(n<=1)
	  return 0;
	for(i=2; i<=n/2; i++){
		if(n% i==0)
		  return 0;
	}
	return 1;
}
