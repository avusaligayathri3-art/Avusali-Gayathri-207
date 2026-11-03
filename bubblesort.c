// program to perform bubble sort
# include <stdio.h>
int main()
{
	int n , i , j , temp;
	printf("Enter a number:");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter Values in Array:\n");
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	// logic 
	 for (i=0;i<n;i++)
	 {
	 	for(j=0;j<=n-1-i;j++)
	 	{
	 		if(a[j]>a[j+1])
	 		{
	 			temp = a[j];
	 			a[j]= a[j+1];
	 			a[j+1] = temp;
			 }
		 }
	 }
	 printf("\n Sorted Array :\n");
	 for(i=0; i <n ; i++)
	 printf("%d\t", a[i]);
	 return 0;
}
