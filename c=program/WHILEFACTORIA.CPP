#include<stdio.h>
#include<conio.h>
void main()
{
	int i,f=1;
	clrscr();

	printf("\n Enter any number=");
	scanf("%d",&i);

	while(i>=1)
	{
		f=f*i;
		i--;
	}
	printf("\n Factorial of number=%d",f);

	getch();
}