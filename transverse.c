#include<stdio.h>
int main()
{
	int ar[10][10],transpose[10][10];
	int m,n,i,j;
	printf("enter no. of rows and columns");
	scanf("%d%d",&m,&n);
	printf("enter elements of matrix");
	for(i=0;i<m;i++)
	
		for(j=0;j<n;j++)
		
			scanf("%d",&ar[i][j]);
	
	
	for(i=0;i<m;i++)
	
		for(j=0;j<n;j++)
		
			transpose[j][i]=ar[i][j];
		
	
	printf("transpose of matrix: \n");
		for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",transpose[i][j]);
	
}
printf(" \n");
}
return 0;
} 
