#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,n,count=0;
	clrscr();

	for(i=0;i<5;i++)
	{
		printf("Enter array element=");
		scanf("%d",&a[i]);
	}

	printf("Enter value=");
	scanf("%d",&n);

	for(i=0;i<5;i++)
	{
		if(n==a[i])
		{
			count++;
		}
	}

		printf("%d is found %d time",n,count);

	getch();
}