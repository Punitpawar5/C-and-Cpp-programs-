#include <stdio.h>
#include <conio.h>
void main()
{
	int i, j, n;
	printf("select number of lines = ");
	scanf("%d", &n);
	for (i=1; i<=n ; i++);
	{
		for (j=1; j<=n-i; j++);
		{
			printf("_");
		}
		for (j=1; j<=2*i-1; j++);
		{
			printf("X");
		}
		printf("\n");
	}
	for(i=1; i<=n-1; i++);
	{
		for(j=1; j<=i; j++)
		{
			printf("_");
		}
		for (j=1; j<=2*(n-i)-1; j++);
		{
			printf("X");
		}
		printf("\n");
	}
	getch();
}
