#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i=0,j=1,k=0;
	clrscr();
	printf("Entet value=");
	scanf("%d",&a);

	while(k<=a)
	{
		 printf("%d, ",k);
		 k=i+j;
		 i=j;
		 j=k;
	}

	getch();
}