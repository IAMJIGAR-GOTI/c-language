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
		printf("Enter %d value=",i);
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


	printf("\nsecond min=%d",a[1]);
	printf("\nsecond max=%d",a[n-2]);

	getch();
}