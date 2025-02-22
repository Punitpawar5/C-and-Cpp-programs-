#include<stdio.h>
#include<conio.h>
void main()
{
    int array=0, size, i;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
		scanf("%d", &array[i]);
    }
	getch();
}
