#include<stdio.h>
#include<conio.h>
void sum(int,int);
void main()
{
	int a,b;
 	printf("Enter any two number = ");
 	scanf("%d%d",&a,&b);
 	sum(a,b);
	getch();
}
 void sum(int a, int b)
{
 	int c;
 	c=a+b;
 	printf("\nSum of two numbers = %d\n",c);
}
