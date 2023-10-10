#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,p;
	clrscr();

	printf("Enter array size=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\n");

	printf("Enter position value=");
	scanf("%d",&p);

	for(i=p;i<n;i++)
	{
		a[i]=a[i+1];
	}

	n--;

	for(i=0;i<n;i++)
	{
		printf("\na[%d]=%d",i,a[i]);
	}

	getch();
}