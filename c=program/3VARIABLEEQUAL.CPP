#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter the value of A=");
	scanf("%d",&a);
	printf("Enter the value of B=");
	scanf("%d",&b);
	printf("Enter the value of C=");
	scanf("%d",&c);

	if(a==b)
	{
		if(a==c)
		{
			printf("All are same");
		}
		else
		{
			if(a>c)
			{
				printf("\nA&B are max\nC is min");
			}
			else
			{
				printf("\nA&B are min\nC is max");
			}
		}
	}
	else
	{
		if(b==c)
		{
			if(a>b)
			{
				printf("\nA is max\nB&C are min");
			}
			else
			{
				printf("\nA is min\nB&C are max");
			}
		}
		else
		{
			if(a==c)
			{
				if(a>b)
				{
					printf("\nA&C are max\nB is min");
				}
				else
				{
					printf("\nA&C are min\nC is max");
				}
			}
			else
			{
				if(a>b)
				{
					if(a>c)
					{
						printf("A is max");
					}
					else
					{
						printf("C is max");
					}
				}
				else
				{
					 if(b>c)
					 {
					       printf("B is max");
					 }
					 else
					 {
					       printf("C is max");
					 }
				}
			}
		}
	}


	getch();
}
