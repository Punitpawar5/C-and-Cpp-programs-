//binary searched

#include <stdio.h>

int main()
{
	printf("BUBBLE SORTING");
    int a[100], i, n, j, temp;
    printf("\n\nEnter total elements = ");
    scanf("%d",&n);
    printf("\nEnter %d element in list= ",n);
    for(i=0; i<=n-1; i++)
    {
        scanf("%d",&a[i]);
    }
    
    //code for bubble sort
    for(i=0;i<=n-1;i++)
    {
    	for(j=0;j<n-1-i;j++)
    	{
    		if(a[j]>a[j+1])
    		{
			
	    		temp=a[j];
	    		a[j]=a[j+1];
	    		a[j+1]=temp;
			}
		}
	}
	printf("\nFinal sorted list= \n");
	for(i=0; i<=n-1; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}

