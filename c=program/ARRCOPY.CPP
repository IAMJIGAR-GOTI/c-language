#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],b[10],i;
	clrscr();

	for(i=0;i<5;i++)
	{
		printf("Enter array number=");
		scanf("%d",&a[i]);
	}

	for(i=0;i<5;i++)
	{
		b[i]=a[i];
		printf("\nb[%d]=%d",i,b[i]);
	}

	getch();
}