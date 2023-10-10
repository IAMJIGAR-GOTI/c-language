#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,max;
	clrscr();
	printf("Enter value A=");
	scanf("%d",&a);
	printf("Enter value B=");
	scanf("%d",&b);
	printf("Enter value C=");
	scanf("%d",&c);
	printf("Enter value D=");
	scanf("%d",&d);
	printf("Enter value E=");
	scanf("%d",&e);

	max = (a>b)?(a>c)?(a>d)?(a>e)?a:e:(d>e)?d:e:(c>d)?(c>e)?c:e:(d>e)?d:e:(b>c)?(b>d)?(b>e)?b:e:(d>e)?d:e:(c>d)?(c>e)?c:e:(d>e)?d:e;
	printf("\nmax=%d",max);

	getch();

}
