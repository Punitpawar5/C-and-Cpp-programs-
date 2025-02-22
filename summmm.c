#include<stdio.h>
#include<conio.h>
void main()
{
	int row, col;
	float a[3][3], sum = 0;
	printf("It is 3x3 2-d array of float. \n enter elements:- ");
	for(row=0; row <=2; row++)
	{
		for(col=0; col <=2; col++)
		{
			printf("a[%f][%f] =", row, col);
			scanf("%f",&a[row][col]);
		}
	}
	printf("\n Sum of elements of 2d arrays of float");
	for(row=0; row <=2; row++)
	{
		for(col=0; col <=2; col++)
		{
			sum= sum + a[row][col];
		}
	}
	printf("\n Sum of all elements = %f", sum);
	getch();
}
