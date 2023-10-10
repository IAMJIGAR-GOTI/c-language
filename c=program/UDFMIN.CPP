#include<stdio.h>
#include<conio.h>
int min(int a,int b)
{
	if(a<b)
	{
		return a;
	}
	else
	{
		return b;
	}

}

void main()
{
	int a,b,c;
	clrscr();
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);

	c=min(a,b);

	printf("Min=%d",min(a,b));

	getch();
}