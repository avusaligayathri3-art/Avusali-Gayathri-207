#include<stdio.h>
int largest(int a,int b, int c);
int main(){
	int a, b, c, max;
	printf("Enter three numbers:");
	scanf("%d %d %d", &a, &b, &c);
	max = largest(a, b, c);
	printf("Largest number =%d\n",max);
	return 0;
}
int largest(int a, int b, int c){
	int big=a;
	if(b>big)
	 big=b;
	if(c>big)
	  big=c;
    return big;
}
