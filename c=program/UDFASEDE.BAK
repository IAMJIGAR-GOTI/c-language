#include<stdio.h>
#include<conio.h>
void asce(int n,int a[100])
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nAscending order:");
	for(i=0;i<n;i++)
	{
		printf("\na[%d]=%d",i,a[i]);
	}
}


void desc(int n,int a[100])
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nDescending order:");
	for(i=0;i<n;i++)
	{
		printf("\na[%d]=%d",i,a[i]);
	}
}

void main()
{
	int a[100],n,i;
	clrscr();

	printf("Enter size of array:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]=",i);
		scanf("%d",&a[i]);
	}

	asce(n,a);
	desc(n,a);

	getch();
}