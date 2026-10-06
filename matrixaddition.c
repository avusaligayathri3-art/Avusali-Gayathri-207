#include<stdio.h>
int main()
{ 
  int A[10][10],B[10][10],C[10][10],i,j,R1,R2,C1,C2;
  printf("enter size of 1st matrix\n");
  scanf("%d%d",&R1,&R2);
  printf("enter size of second matrix");
  scanf("%d%d",&R2,&C2);
  if(R1==R2&C1==C2)
  {
    printf("enter 1st matrix values\n");
	for(i=0;i<R1;i++)
	for(j=0;j<C1;j++)
	scanf("%d;A[i][j]");
	printf("enter 2nd matrix values\n");
	for(i=0;i<R2;i++)
	for(j=0;j<C2;j++)
	scanf("%d",&B[i][j]);{
	for(i=0;i<R1;i++)
	C[i][j]=A[i][j]+B[i][j];
    }
    printf("the resultant matrix:\n");
    for(i=0;i<R2;i++)
    for(j=0;j<C2;j++)
    printf("%d",C[i][j]);
    printf(" \n");
  }
   else 
   {
   	printf("sorry your matrix doesn't exist");
	}
	return 0; 
	 }
