#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sum=0,temp,x;
	clrscr();
	printf("Enter value=");
	scanf("%d",&i);
	x=i;
	while(i!=0)
	{
		temp=i%10;
		sum=sum+(temp*temp*temp);
		i=i/10;
	}


	if(sum==x)
	{
		printf("\nThis is Armstong number");
	}
	else
	{
		printf("\nThis is not Armstrong number");
	}

	getch();
}