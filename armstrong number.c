#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,sum=0,temp;
	printf("enter the number = ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
		printf("\nArmstrong number");
	else
		printf("\nNot Armstrong number");
	getch();
}
