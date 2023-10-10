#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100][100],b[100][100],c[100][100],n,i,j;
	clrscr();

	printf("Enter size of array=");
	scanf("%d",&n);

	printf("\n");

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	printf("\n");

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}

	printf("\n");
	printf("1st matrix:\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("2nd matrix:\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}

	printf("\n");

	printf("Addition of matrix:\n\n");

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}

	getch();
}