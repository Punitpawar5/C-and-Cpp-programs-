//binary searched

#include <stdio.h>

int main()
{
	printf("LINEAR SEARCH");
    int a[100], i, n, key, flag=0;
    printf("\n\nEnter total elements = ");
    scanf("%d",&n);
    printf("\nEnter element in ascending order= ");
    for(i=0; i<=n-1; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter element to be searched = ");
    scanf("%d",&key);
    
    for(i=0; i<=n-1; i++)
    {
    	if(key==a[i])
    	{
    		flag=1;
    		break;
		}
	}
        
    
    if(flag==1)
        printf("Search succesful");
    else
    	printf("\nElement not found");
    return 0;
}

