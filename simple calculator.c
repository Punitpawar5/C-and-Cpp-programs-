#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	float a,b,c,i;
	int ch;
	printf("*********************** A SIMPLE CALCULATOR BY PUNIT PAWAR ****************************");
	do
	{
		printf("\n Enter 1 for addition");
		printf("\n Enter 2 for subtraction");
		printf("\n Enter 3 for multiplication");
		printf("\n Enter 4 for devision");
		printf("\n Enter 5 for x power 2");
		printf("\n Enter 6 for x power 3");
		printf("\n Enter 7 for area of circle");
		printf("\n Enter 8 for area of triangle");
		printf("\n Enter 9 for average of two number");
		printf("\n Enter 10 for EXIT");
		printf("\n Enter 11 Enter your choice = ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\n Enter any two number = \n");
				scanf("%f%f", &a, &b);
				c=a+b;
				printf("\n Sum of two number = %f", c);
				break;
			case 2:
				printf("\n Enter any two number = \n");
				scanf("%f%f", &a, &b);
				c=a-b;
				printf("\n Difference of two number = %f", c);
				break;
			case 3:
				printf("\n Enter any two number = \n");
				scanf("%f%f", &a, &b);
				c=a*b;
				printf("\n Product of two number = %f", c);
				break;
			case 4:
				printf("\n Enter any two number = \n");
				scanf("%f%f", &a, &b);
				c=a/b;
				printf("\n devision of two number = %f", c);
				break;
			case 5:
				printf("\n Enter any number for its sqaure = \n");
				scanf("%f", &a);
				c=1;
				for(i=1; i<=2; i++)
				{
					c=c*a;
				}
				printf("\n Sqaure of given number = %f", c);
				break;
			case 6:
				printf("\n Enter any number for its cube = \n");
				scanf("%f", &a);
				c=1;
				for(i=1; i<=3; i++)
				{
					c=c*a;
				}
				printf("\n Sqaure of given number = %f", c);
				break;
			case 7:
				printf("\n Enter radius = \n");
				scanf("%f", &a);
				c=3.14*a*a;
				printf("\n Area of circle = %f", c);
				break;
			case 8:
				printf("\n Enter height of triange = \n");
				scanf("%f", &a);
				printf("\n Enter base of triange = \n");
				scanf("%f", &b);
				c=0.5*a*b;
				printf("\n Area of triangle = %f", c);
				break;
			case 9:
				printf("\n Enter two number for their average = \n");
				scanf("%f%f", &a,&b);
				c=a+b/2;
				printf("\n average of two number = %f", c);
				break;
			case 10:
				exit(0);
			default:
				printf("\n Enter correct choice");
		}
	}while(1);
	getch();
}
