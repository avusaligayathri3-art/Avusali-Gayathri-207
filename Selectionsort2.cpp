// program to perform selection sort 
# include <stdio.h>

#include <stdio.h>

int main()
{
    int n, i, j, temp , min;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    int a[n];

    printf("Enter values in the array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // logic
    for(i=0; i<n;i++)
    {
    	min=i;
    	for(j=i+1;j<n;j++)
    	{
    		if(a[min]> a[j])
    		min = j;
    	}
    		if(i! = mins)
    		{
    			temp = a[i];
    			a[i] = a[min];
    			a[min] = temp;
			}
		
	}
    

    printf("\nSorted Array:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);

    return 0;
}

