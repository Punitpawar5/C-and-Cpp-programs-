#include <stdio.h>
#include <conio.h>
void swap();
void main()
{
	swap();
	
	getch();
}
void swap()
{
	int a,b,c;
	printf("Enter any two number = ");
	scanf("%d%d", &a, &b);
	c=a;
	a=b;
	b=c;
	printf("After swapping = %d \n%d", a,b);
}
