#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,max;
	clrscr();
	printf("Enter value A=");
	scanf("%d",&a);
	printf("Enter value B=");
	scanf("%d",&b);
	printf("Enter value C=");
	scanf("%d",&c);

	max = (a>b) ? (a>c) ? a : c : (b>c) ? b : c ;
	printf("\nmax=%d",max);

	getch();

}
