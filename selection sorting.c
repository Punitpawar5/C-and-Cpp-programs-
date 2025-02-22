#include<stdio.h>
int main()
{
	printf("SELECTION SORTING");
    int a[100],i,n,j, min, loc, temp;
    printf("\n\nEnter total numbers:");
    scanf("%d",&n);
    printf("\nEnter %d elements \n",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min= a[i];
        loc=i;
        for(j=i+1;i<=n-1;j++)
        {
        	if(a[j]<min)
        	{
        		min=a[j];
        		loc=j;
			}
		}
		if(i!=loc)
		{
			temp=a[i];
			a[i]=a[loc];
			a[loc]=temp;
		}
    }
    printf("\nFinal sorted list= \n");
	for(i=0; i<=n-1; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}


