#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,p,v;
	clrscr();

	printf("Enter array size=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter value=");
		scanf("%d",&a[i]);
	}
	printf("\n");

	printf("Enter position value=");
	scanf("%d",&p);

	printf("\n");

	printf("Enter insert value=");
	scanf("%d",&v);

	for(i=n;i>p;i--)
	{
		a[i]=a[i-1];
	}

	a[p]=v;
	n++;

	for(i=0;i<n;i++)
	{
		printf("\na[%d]=%d",i,a[i]);
	}

	getch();
}