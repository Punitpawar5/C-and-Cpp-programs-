#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b,c,d,n,A;
	printf("enter first 3 number of AP = \n");
	scanf("%d%d%d",&a,&b,&c);
	printf("enter the number of terms = \n");
	scanf("%d",&n);
	d=b-a;
	A=a+(n-1)*d;
	printf("%d is the nth term of AP",A);
}
