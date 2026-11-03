#include<stdio.h>
int bubblesort(int a[],int n);
int main()
{
	int b[100],x,i;
	printf("emter no of elements of array");
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		scanf("%d",&x);
	}
	bubblesort(b,x);
	return 0;
}
int bubblesort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++);
		{
			if (a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
