#include<stdio.h>
#include<conio.h>
int fact(int n)
{
	int i,f=1;
	for(i=n;i>=1;i--)
	{
		f=f*i;
	}

	return f;
}

void main()
{
	int n;
	clrscr();
	printf("Enter number=");
	scanf("%d",&n);
	fact(n);

	printf("Factorial=%d",fact(n));

	getch();

}