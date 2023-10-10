#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[100];
	int i,j,k,cnt;
	clrscr();

	printf("Enter a string=");
	gets(a);
	cnt=strlen(a);

	for(i=0;a[i]!=NULL;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",a[j]);
		}
		printf("\n");
	}

	printf("\n");

	for(i=0;a[i]!=NULL;i++)
	{
		for(j=i;a[j]!=NULL;j++)
		{
			printf("%c",a[j]);
		}
		printf("\n");
	}

	printf("\n");

	for(i=0;a[i]!=NULL;i++)
	{
		for(j=0;j<=i;j++)
		{
			 printf("%c",a[j]);
		}
		for(k=cnt-1;k>i;k--)
		{
			printf(" ");
		}
		for(k=cnt-1;k>i;k--)
		{
			printf(" ");
		}
		for(j=i;j>=0;j--)
		{
			printf("%c",a[j]);
		}
		printf("\n");
	}

	printf("\n");

	for(i=0;a[i]!=NULL;i++)
	{
		for(j=0;a[j]!=NULL;j++)
		{
			if(i==j || i+j==cnt-1)
			{
				printf("%c",a[i]);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}


	getch();
}

