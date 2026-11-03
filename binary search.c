#include<stdio.h>
int main()
{
	int a[100],s,n,i,l,h,mid;
	printf("enter no of elements in order");
	scanf("%d",&n);
	printf("%d elements");
	for(i=0;i<n;i++){
		scanf("d",&a[i]);
	}
	while(l<=h){
		mid=(l+h)/2;
		if(s==a[mid]){
			printf("%d is found at%d position\n");
			mid+1;
			break;
		}
			else if(s>a[mid])
			l=mid+1;
			else
			h=mid-1;
		
	}
	return 0;
}
