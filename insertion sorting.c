#include<stdio.h>
void main()
{
	printf("INSERTION SORTING");
    int a[100],i,n,j,temp;
    printf("\n\nEnter total numbers:");
    scanf("%d",&n);
    printf("\nEnter %d elements \n",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n-1;i++)
    {
        temp=a[i];
        j=i-1;
        while(temp<a[j]&&j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("\nFinal sorted list :\n");
    for(i=0;i<=n-1;i++)
    printf("%d\n",a[i]);
    return 0;
}


