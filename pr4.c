#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n;
	printf("program to check prime number");
	printf("enter any number = ");
	scanf("%d",&n);
	for(i=2; i<n; i++)
	if(n/i==n)
		printf("it is not a prime number = %d", n);
	else
		printf("it is a prime number = %d", n);
	getch();
}
