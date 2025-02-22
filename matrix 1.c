#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3], b[3][3], c[3][3];
	int row, col, k;
	printf(" \n Enter elements in first matrix:- ");
	for(row=0; row <=2; row++)
	{
		for(col=0; col <=2; col++)
		{
			scanf("%d", &a[row][col]);
		}
	}
	printf(" \n Enter elements in second matrix:- ");
	for(row=0; row <=2; row++)
	{
		for(col=0; col <=2; col++)
		{
			scanf("%d", &b[row][col]);
		}
	}
	printf(" \n Enter elements in first matrix:- ");
	for(row=0; row <=2; row++)
	{
		for(col=0; col <=2; col++)
		{
			c[row][col]= 0;
			for(k=0; k<=2; k++)
			{
				c[row][col]= c[row][col] + (a[row][k] * b[k][col]);
			}
		}
		printf("\n matrix after multiplication =\n");
		for(row=0; row <=2; row++)
		{
			for(col=0; col <=2; col++)
			{
				printf("%d \t",&c[row][col]);
			}
			printf("\n");
		}
	}
	getch();
}
