#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100][100],n,i,j,sum=0;
	clrscr();

	printf("Enter array size=");
	scanf("%d",&n);

	printf("\n\n");

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	printf("\nMatrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=sum+a[i][j];
		}
	}

	printf("Sum of Matrix=%d",sum);

	getch();
}