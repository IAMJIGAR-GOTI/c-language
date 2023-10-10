#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();

	printf("Enter value=");
	scanf("%d",&i);

	while(i<=10)
	{
		printf("\n\t%d",i);
		i++;
	}
	printf("\n\nEnter value=");
	scanf("%d",&n);

	while(n>=1)
	{
		printf("\n\t%d",n);
		n--;
	}


	getch();
}