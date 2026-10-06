#include<stdio.h>
int main() 
{ 
  int min,max,i,n,a[100];
  printf("enter size of the array:");
  scanf("%d",&n);
  printf("enter elements in array:"); 
  for(i=0;i<n;i++)
  { 
   scanf("%d",&a[i]);
  }
  min=max=a[0];
  for(i=1;i<n;i++)
  {
  	if(a[i]<min)
  	min=a[i];
  	if(a[i]>max)
  	max=a[i];
  } 
   printf("the maximum value=%d\t,minimum=%d\t",min,max); 
   return 0;
}
