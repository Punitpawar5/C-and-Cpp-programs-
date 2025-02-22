#include <stdio.h>
#include <conio.h>
void main()
{
	int i, n , t;
	n=17;
	for(i=1; i<=10; i++)
	{
		t=n*i;
		printf("%d * %d = %d \n", n,i,t);
	}
	getch();
}
