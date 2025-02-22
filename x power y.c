#include <stdio.h>
#include <conio.h>
void main()
{
	int x, y, p, i;
	printf("enter the base and power values = ");
	scanf("%d %d", &x, &y);
	p=1;
	for(i=1; i<=y; i++)
	{
		p=p*x;
	}
	printf("x ki power y = %d", p);
	getch();
}
