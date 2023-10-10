#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100][100],n,i,j,sum;
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

	for(i=0;i<n;i++)
	{
	  sum=0;
		for(j=0;j<n;j++)
		{
			sum=sum+a[i][j];
		}

		printf("\nRow %d sum=%d",i+1,sum);
	}

	printf("\n");

	for(i=0;i<n;i++)
	{
	  sum=0;
		for(j=0;j<n;j++)
		{
			sum=sum+a[j][i];
		}

		printf("\nColumn %d sum=%d",i+1,sum);
	}

	printf("\n");
	sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("Left Diagonal sum=%d",sum);

	printf("\n");
	sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i+j==n-1)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("Right Diagonal sum=%d",sum);


	getch();
}