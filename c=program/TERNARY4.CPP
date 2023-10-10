#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,max;
	clrscr();
	printf("Enter value A=");
	scanf("%d",&a);
	printf("Enter value B=");
	scanf("%d",&b);
	printf("Enter value C=");
	scanf("%d",&c);
	printf("Enter value D=");
	scanf("%d",&d);

	max = (a>b)?(a>c)?(a>d)?a:d:(c>d)?c:d:(b>c)?(b>d)?b:d:(c>d)?c:d;
	printf("\nmax=%d",max);

	getch();

}
