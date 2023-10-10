#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	clrscr();
	printf("Enter Value");
	scanf("%d%d%d%d",&a,&b,&c,&d);

	if(a>b && a>c && a>d)
	{
		printf("1st value is max");
	}
	else if(b>c && b>d)
	{
		printf("2nd value is max");
	}
	else if(c>d)
	{
		printf("3rd value is max");
	}
	else
	{
		printf("4th value is max");
	}

	getch();
}