#include <stdio.h>
#include <conio.h>
void main()
{
	int n,j,i,k;
	printf("Enter number of lines = ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			printf("*");
		}
		for(k=j+2; k<=j-2; k++)
		{
			printf("_");
		}
		printf("\n");
	}
	getch();
}
