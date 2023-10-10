#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,f;
	clrscr();
	printf("enter the value of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);
	c=a+b;
	printf("\nsum of value a+b=%d",c);
	d=a-b;
	printf("\nminus of value a-b=%d",d);
	e=a*b;
	printf("\nmultiply of value a*b=%d",e);
	f=a/b;
	printf("\ndivided of value a/b=%d",f);


	getch();
}