#include<stdio.h>
long factorial(int n);
int main(){
	int n;
	printf("Enter a number:");
	scanf("%d", &n);
	printf("Factorial of %d =%1d\n",n, factorial(n));
	return 0;
}
 long factorial(int n){
 	if (n ==0|| n ==1)
	   return 1;
	else
	 return n * factorial(n -1);
}
