#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, k, n;
	printf("select number of lines = ");
	scanf("%d", &n);
	for (i=1; i<=(n/2)+1 ; i++);
	{
		for (j=n-i; j<=n; j++);
		{
			printf("_");
		}
			for (k=i; k<=(n/2)+1; k++)
			{
				printf("*");
			}
		printf("\n");
	}
	for(i=(n/2)+2; i=n; i++);
	{
		for(j=(n+1)/2; j=n-1; j++)
		{
			printf("_");
		}
			for(k=(n/2); k=n; k++)
			{
				printf("*");
			}
		printf("\n");
	}
	getch();
}
