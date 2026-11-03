// program to perform linear search
# include <stdio.h>
int main()
{
	int n , i ,target;
	printf("Enter a Number");
	scanf("%d",&n);
	int a[n];
	printf("\n Enter Array Values : \n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter a value to search :");
	scanf("%d",&target);
	for (i=0; i<n;i++)
	{
		if(a[i]==target)
		{
			printf("Target found at %d index ",i);
			break;
		}
	}
	return 0;
}
