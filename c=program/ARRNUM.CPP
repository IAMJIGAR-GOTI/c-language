#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i;
	clrscr();

	for(i=0;i<5;i++)
	{
		printf("Enter array element=");
		scanf("%d",&a[i]);
	}

	for(i=0;i<5;i++)
	{
		printf("\na[%d]=%d",i,a[i]);
	}

		printf("\n\nReverse number");

	for(i=4;i>=0;i--)
	{
		printf("\na[%d]=%d",i,a[i]);
	}


	getch();
}