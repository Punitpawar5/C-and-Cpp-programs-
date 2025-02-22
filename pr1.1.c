#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b,c,d,e,f;
	printf("enter marks obtained in exam... english=,"hindi","maths","cs","physics"");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	f=(a+b+c+d+e)/5;
	if(f>=90 && f<=100)
		printf("%d is grade A+", f);
	if(f>=80 && f<90)
		printf("%d is grade A", f);
	if(f>=70 && f<80)
		printf("%d is grade B+", f);
	if(f>=60 && f<70)
		printf("%d is grade B", f);
	if(f>=50 && f<60)
		printf("%d is grade C+", f);	
	if(f>=40 && f<50)
		printf("%d is grade C", f);
	if(f>=0 && f<40)
		printf("%d fail welcome back", f);
	getch();
}

