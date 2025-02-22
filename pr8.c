#include <stdio.h>
#include <conio.h>
void main()
{
	int n,j,i,k=1;
	printf("Enter number of lines = ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i+1;j++)
		{
			if(k%2 != 0)
				printf("%d ",k);
				k++;
		}printf("\n");
	}getch();
}

