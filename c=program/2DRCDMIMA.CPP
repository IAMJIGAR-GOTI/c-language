#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100][100],n,i,j,min,max;
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
	  j=0;
	  min=a[i][j];
		for(j=0;j<n;j++)
		{
			if(min>a[i][j])
			{
				min=a[i][j];
			}
		}
		printf("\nMin %d Row=%d",i+1,min);
	}

	printf("\n");

	for(i=0;i<n;i++)
	{
	  j=0;
	  max=a[i][j];
		for(j=0;j<n;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
			}
		}
		printf("\nMax %d Row=%d",i+1,max);
	}
	printf("\n");

	for(i=0;i<n;i++)
	{
	  j=0;
	  min=a[j][i];
		for(j=0;j<n;j++)
		{
			if(min>a[j][i])
			{
				min=a[j][i];
			}
		}
		printf("\nMin %d Column=%d",i+1,min);
	}

	printf("\n");

	for(i=0;i<n;i++)
	{
	  j=0;
	  max=a[j][i];
		for(j=0;j<n;j++)
		{
			if(max<a[j][i])
			{
				max=a[j][i];
			}
		}
		printf("\nMax %d column=%d",i+1,max);
	}
	printf("\n");
	i=j=0;
	min=a[i][j];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				if(min>a[i][j])
				{
					min=a[i][j];
				}
			}
		}
	}
	printf("\nLeft Diagonal Min=%d",min);

	printf("\n");
	i=j=0;
	min=a[i][j];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i+j==n-1)
			{
				 if(min>a[i][j])
				 {
					min=a[i][j];
				 }
			}
		}
	}
	printf("\nRight Diagonal Min=%d",min);


	getch();
}