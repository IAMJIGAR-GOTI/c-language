#include<stdio.h>
#include<conio.h>
void main()
{
	int Maths,Physics,Chemistry,Computer,English,T,P;
	clrscr();
	printf("\t\t\t\tStudent Result");
	printf("\n\t\t\t\t--------------");
	printf("\n\tName:Hardik Moradiya");

	printf("\n\n\tMaths marks=");
	scanf("%d",&Maths);
	printf("\n\tPhysics marks=");
	scanf("%d",&Physics);
	printf("\n\tChemistry marks=");
	scanf("%d",&Chemistry);
	printf("\n\tComputer marks=");
	scanf("%d",&Computer);
	printf("\n\tEnglish marks=");
	scanf("%d",&English);


	if(Maths>=35 && Physics>=35 && Chemistry>=35 && Computer>=35 && English>=35)
	{
		printf("\n\n\tPASS");
		T=Maths+Physics+Chemistry+Computer+English;
		printf("\n\n\tTotal marks=%d",T);

		P=(Maths+Physics+Chemistry+Computer+English)/5;
		printf("\n\n\tPercentege=%d",P);

			printf("\n\n\t");
		if(Maths>Physics && Maths>Chemistry && Maths>Computer && Maths>English)
		{
		printf("Maths Mark is max");
		}
		else if(Physics>Chemistry && Physics>Computer && Physics>English)
		{
		printf("Physics Mark is max");
		}
		else if(Chemistry>Computer && Chemistry>English)
		{
		printf("Chemistry Mark is max");
		}
		else if(Computer>English)
		{
		printf("Computer Mark is max");
		}
		else
		{
		printf("English Mark is max");
		}


		printf("\n\n\t");
		if(Maths<Physics && Maths<Chemistry && Maths<Computer && Maths<English)
		{
		printf("Maths Mark is min");
		}
		else if(Physics<Chemistry && Physics<Computer && Physics<English)
		{
		printf("Physics Mark is min");
		}
		else if(Chemistry<Computer && Chemistry<English)
		{
		printf("Chemistry Mark is min");
		}
		else if(Computer<English)
		{
		printf("Computer Mark is min");
		}
		else
		{
		printf("English Mark is min");

		}
	}
	else
	{
		printf("\n\n\tFAIL");
	}

	printf("\n\n\t");

	if(Maths>=35 && Physics>=35 && Chemistry>=35 && Computer>=35 && English>=35)
	{
		if(P>80)
		{
			printf("Grade:A");
		}
		else if(P>60)
		{
			printf("Grade:B");
		}
		else if(P>40)
		{
			printf("Grade:C");
		}
		else
		{
			printf("Grade:D");
		}
	}


	getch();
}

