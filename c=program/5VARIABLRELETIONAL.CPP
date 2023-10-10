#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e;
	clrscr();
	printf("enter the value of A=");
	scanf("%d",&a);
	printf("enter the value of B=");
	scanf("%d",&b);
	printf("enter the value of C=");
	scanf("%d",&c);
	printf("enter the value of D=");
	scanf("%d",&d);
	printf("enter the value of E=");
	scanf("%d",&e);

	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				if(a>e)
				{
					printf("A is max");
				}
				else
				{
					printf("e is max");
				}
			}
			else
			{
				if(d>e)
				{
					printf("D is max");
				}
				else
				{
					printf("E is max");
				}
			}
		}
		else
		{
			if(c>d)
			{
				if(c>e)
				{
					printf("C is max");
				}
				else
				{
					printf("E is max");
				}
			}
			else
			{
				if(d>e)
				{
					printf("D is max");
				}
				else
				{
				}       printf("E is max");
			}
		}
	}

	else
	{
		if(b>c)
		{
			if(b>d)
			{
				if(b>e)
				{
					printf("B is max");
				}
				else
				{
					printf("E is max");
				}
			}
			else
			{
				if(d>e)
				{
				printf("D is max");
				}
				else
				{
				printf("E is max");
				}
			}
		}
		else
		{
			if(c>d)
			{
				if(c>e)
				{
					printf("C is max");
				}
				else
				{
					printf("E is max");
				}
			}
			else
			{
				if(d>e)
				{
					printf("D is max");
				}
				else
				{
					printf("E is max");
				}
			}
		}
	}

	getch();

}