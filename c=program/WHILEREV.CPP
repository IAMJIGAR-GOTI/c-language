#include<stdio.h>
#include<conio.h>
void main()
{
	int i,r=0;
	clrscr();
	printf("Enter Value=");
	scanf("%d",&i);

	while(i>0)
	{
		r=(r*10)+i%10;
		i=i/10;
	}

	printf("Reverse Number=%d",r);

	getch();

}