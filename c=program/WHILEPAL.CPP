#include<stdio.h>
#include<conio.h>
void main()
{
	int i,rev=0,temp,x;
	clrscr();
	printf("Enter value=");
	scanf("%d",&i);
	x=i;
	while(i!=0)
	{
		temp=i%10;
		rev=(rev*10)+temp;
		i=i/10;
	}
		printf("Reversr value=%d",rev);

	if(rev==x)
	{
		printf("\nThis is Palindrom number");
	}
	else
	{
		printf("\nThis is not Palindrom number");
	}

	getch();
}