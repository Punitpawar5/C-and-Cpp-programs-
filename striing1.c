#include<stdio.h>
#include<conio.h>
void main()
{
	char str[30], temp;
	int i, j, a;
	printf("enter the string = ");
	scanf("%s", str);
	for(i=0; str[i] != '\0'; i++);
	a=i-1;
	for(j=0; j< a; j++)
	{
		temp= str[i];
		str[i]= str[a];
		str[a]= temp;
		a--;
	}
	printf("the reverse of string is %s ", str);
	getch();
}
