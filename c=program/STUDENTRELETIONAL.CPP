#include<stdio.h>
#include<conio.h>
void main()
{
	int Maths,Physics,Chemistry,Computer,English,T,P;
	clrscr();
	printf("\n\t\t\t\tStudent Result");
	printf("\n\t\t\t\t--------------");
	printf("\n\n\tStudent Name : Hardik Moradiya");
	printf("\n\n\t Maths marks=");
	scanf("%d",&Maths);
	printf("\n\t Physics marks=");
	scanf("%d",&Physics);
	printf("\n\t Chemistry marks=");
	scanf("%d",&Chemistry);
	printf("\n\t Computer marks=");
	scanf("%d",&Computer);
	printf("\n\t English marks=");
	scanf("%d",&English);

	T=Maths+Physics+Chemistry+Computer+English;
	printf("\n\n\tTotal Marks=%d",T);

	P=(Maths+Physics+Chemistry+Computer+English)/5;
	printf("\n\n\tPercentege=%d",P);

	printf("\n\n\t");

	if(Maths>Physics)
	{
		if(Maths>Chemistry)
		{
			if(Maths>Computer)
			{
				if(Maths>English)
				{
					printf("Maths mark is max");
				}
				else
				{
					printf("English mark is max");
				}
			}
			else
			{
				if(Computer>English)
				{
					printf("Computer mark is max");
				}
				else
				{
					printf("English mark is max");
				}
			}
		}
		else
		{
			if(Chemistry>Computer)
			{
				if(Chemistry>English)
				{
					printf("Chemistry mark is max");
				}
				else
				{
					printf("English mark is max");
				}
			}
			else
			{
				if(Computer>English)
				{
					printf("Computer mark is max");
				}
				else
				{
					printf("English mark is max");
				}
			}
		}
	}
	else
	{
		if(Physics>Chemistry)
		{
			if(Physics>Computer)
			{
				if(Physics>English)
				{
					printf("Physics mark is max");
				}
				else
				{
					printf("English mark is max");
				}
			}
			else
			{
				if(Computer>English)
				{
					printf("Computer mark is max");
				}
				else
				{
					printf("English mark is max");
				}
			}
		}
		else
		{
			if(Chemistry>Computer)
			{
				if(Chemistry>English)
				{
					printf("Chemistry mark is max");
				}
				else
				{
					printf("English mark is max");
				}
			}
			else
			{
				if(Computer>English)
				{
					printf("Computer mark is max");
				}
				else
				{
					printf("English mark is max");
				}
			}
		}
	}

	printf("\n\n\t");

	if(Maths<Physics)
	{
		if(Maths<Chemistry)
		{
			if(Maths<Computer)
			{
				if(Maths<English)
				{
					printf("Maths mark is min");
				}
				else
				{
					printf("English mark is min");
				}
			}
			else
			{
				if(Computer<English)
				{
					printf("Computer is min");
				}
				else
				{
					printf("English is min");
				}
			}
		}
		else
		{
			if(Chemistry<Computer)
			{
				if(Chemistry<English)
				{
					printf("Chemistry mark is min");
				}
				else
				{
					printf("English mark is min");
				}
			}
			else
			{
				if(Computer<English)
				{
					printf("Computer mark is min");
				}
				else
				{
					printf("English mark is min");
				}
			}
		}
	}
	else
	{
		if(Physics<Chemistry)
		{
			if(Physics<Computer)
			{
				if(Physics<English)
				{
					printf("Physics mark is min");
				}
				else
				{
					printf("English mark is min");
				}
			}
			else
			{
				if(Computer<English)
				{
					printf("Computer mark is min");
				}
				else
				{
					printf("English mark is min");
				}
			}
		}
		else
		{
			if(Chemistry<Computer)
			{
				if(Chemistry<English)
				{
					printf("Chemistry mark is min");
				}
				else
				{
					printf("English mark is min");
				}
			}
			else
			{
				if(Computer<English)
				{
					printf("Computer mark is min");
				}
				else
				{
					printf("English mark is min");
				}
			}
		}
	}

	printf("\n\n\t");

	if(P>80)
	{
		printf("Grade: A");
	}
	else if(P>60)
	{
		printf("Grade: B");
	}
	else if(P>40)
	{
		printf("Grade: C");
	}
	else
	{
		printf("Grade: D");
	}


	getch();
}



