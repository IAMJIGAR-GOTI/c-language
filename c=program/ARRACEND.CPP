#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,i,j,temp;
	clrscr();

	printf("Enter array size=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter value=");
		scanf("%d",&a[i]);
	}

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

	for(i=0;i<n;i++)
	{
		printf("\na[%d]=%d",i,a[i]);
	}


	getch();
}