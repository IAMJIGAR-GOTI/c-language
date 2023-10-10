#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,max;
	clrscr();
	printf("Enter value A=");
	scanf("%d",&a);
	printf("Enter value B=");
	scanf("%d",&b);

	max = (a>b) ? a : b ;
	printf("\nmax=%d",max);

	getch();

}
