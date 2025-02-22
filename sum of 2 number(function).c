#include<stdio.h>
#include<conio.h>
void sum();
void main()
{
	sum();
	sum();
	sum();
	getch();
}
 void sum()
{
 	int a,b,c;
 	printf("Enter any two number = ");
 	scanf("%d%d",&a,&b);
 	c=a+b;
 	printf("\nSum of two numbers = %d\n",c);
}
