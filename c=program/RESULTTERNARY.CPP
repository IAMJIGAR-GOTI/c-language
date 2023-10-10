#include<stdio.h>
#include<conio.h>
void main()
{
	int Maths,Physics,Chemistry,Computer,English,T,P,max,min;
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

	T=Maths+Physics+Chemistry+Computer+English;
	printf("\n\n\tTotal Marks=%d",T);

	P=T/5;
	printf("\n\n\tPercentege=%d",P);

	max=(Maths>Physics)?(Maths>Chemistry)?(Maths>Computer)?(Maths>English)?Maths:English:(Computer>English)?Computer:English:(Chemistry>Computer)?(Chemistry>English)?Chemistry:English:(Computer>English)?Computer:English:(Physics>Chemistry)?(Physics>Computer)?(Physics>English)?Physics:English:(Computer>English)?Computer:English:(Chemistry>Computer)?(Chemistry>English)?Chemistry:English:(Computer>English)?Computer:English;
	printf("\n\n\tMax Marks=%d",max);

	min=(Maths<Physics)?(Maths<Chemistry)?(Maths<Computer)?(Maths<English)?Maths:English:(Computer<English)?Computer:English:(Chemistry<Computer)?(Chemistry<English)?Chemistry:English:(Computer<English)?Computer:English:(Physics<Chemistry)?(Physics<Computer)?(Physics<English)?Physics:English:(Computer<English)?Computer:English:(Chemistry<Computer)?(Chemistry<English)?Chemistry:English:(Computer<English)?Computer:English;
	printf("\n\n\tMin Marks=%d",min);

	getch();
}