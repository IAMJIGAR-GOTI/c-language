#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],b[100],c[100],i,n;
	clrscr();

	printf("Enter array size=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter 1st value=");
		scanf("%d",&a[i]);
	}
	printf("\n");

	for(i=0;i<n;i++)
	{
		printf("Enter 2nd value=");
		scanf("%d",&b[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}

	for(i=0;i<n;i++)
	{
		printf("\nc[%d]=%d",i,c[i]);
	}

	getch();
}