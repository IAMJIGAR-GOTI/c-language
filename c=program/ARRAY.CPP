#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],n,i,max;
	clrscr();

	for(i=0;i<5;i++)
	{
		printf("\na[%d]=",i);
		scanf("%d",&a[i]);
	}

	max=(a[0]>a[1])?(a[0]>a[2])?(a[0]>a[3])?(a[0]>a[4])?a[0]:a[4]:(a[3]>a[4])?a[3]:a[4]:(a[2]>a[3])?(a[2]>a[4])?a[2]:a[4]:(a[3]>a[4])?a[3]:a[4]:(a[1]>a[2])?(a[1]>a[3])?(a[1]>a[4])?a[1]:a[4]:(a[3]>a[4])?a[3]:a[4]:(a[2]>a[3])?(a[2]>a[4])?a[2]:a[4]:(a[3]>a[4])?a[3]:a[4];

	printf("max=%d",max);

	getch();
}
