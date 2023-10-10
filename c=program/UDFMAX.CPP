#include<stdio.h>
#include<conio.h>
int max(int a,int b,int c)
{
	if(a>b && a>c)
	{
		return a;
	}
	else if(b>c)
	{
		return b;
	}
	else
	{
		return c;
	}

}

void main()
{
	int a,b,c,d;
	clrscr();
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
	printf("Enter c=");
	scanf("%d",&c);

	d=max(a,b,c);

	printf("\n");

	printf("Max=%d",max(a,b,c));

	getch();
}