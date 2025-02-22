#include <stdio.h>
#include <conio.h>
void main()
{
	int x, y , p, i;
	printf("enter value of x = ");
	scanf("%d", &x);
	printf("enter value of y = ");
	scanf("%d", &y);
	p=1;
	for(i=1; i<=y; i++)
	{
		p=p*x;
	}
	printf(" x power y is = %d ", p);
	getch();
}
