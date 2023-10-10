#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10,b=20,c;
	clrscr();
	printf("Before Value Swap");
	printf("\n\ta=%d",a);
	printf("\n\tb=%d",b);

	c=b;
	b=a;
	b=c;

	printf("\n\nAfter Value Swap");
	printf("\n\ta=%d",a);
	printf("\n\tb=%d",b);

	getch();
}
