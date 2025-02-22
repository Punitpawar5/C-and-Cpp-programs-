//binary searched

#include <stdio.h>

int main()
{
	printf("BINARY SEARCH");
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
        
    int beg=0, end = n-1, mid=-1;
    while(a[mid]!=key && beg <= end)
        {
            mid=(beg+end)/2;
            if(a[mid]==key)
            {
                flag=1;
                break;
            }
            else
            {
                if(a[mid]<key)
                    beg=mid+1;
                else
                    end=mid-1;
            }
        }
        if(flag==1)
            printf("Search succesful through binary search");
        else
            printf("\nElement not found");
            return 0;
}

