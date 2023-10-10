#include<stdio.h>
#include<conio.h>
void sum(int n,int a[100][100])
{
	int i,j,sumld=0,sumrd=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				sumld=sumld+a[i][j];
			}
			if(i+j==n-1)
			{
				sumrd=sumrd+a[i][j];
			}
		}
	}
	printf("\nLeft diagonal sum=%d",sumld);
	printf("\n\nRight diagonal sum=%d",sumrd);
}


void main()
{
	int a[100][100],n,i,j;
	clrscr();

	printf("Enter size of array:");
	scanf("%d",&n);

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
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	sum(n,a);

	getch();
}