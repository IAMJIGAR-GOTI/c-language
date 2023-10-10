#include<stdio.h>
#include<conio.h>
void main()
{
	int choice;
	clrscr();

	printf("1.min\n2.max\n3.mult\n4.sum");

	printf("\nEnter choice=");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
		{
			int a[3],i,min;
			for(i=0;i<3;i++)
			{
				printf("Enter value=");
				scanf("%d",&a[i]);
			}
			min=a[0];
			for(i=0;i<3;i++)
			{
				if(min>a[i])
				{
					min=a[i];
				}
			}
			printf("min=%d",min);
			break;
		}


		case 2:
		{
			int a[3],i,max;
			for(i=0;i<3;i++)
			{
				printf("Enter value=");
				scanf("%d",&a[i]);
			}
			max=a[0];
			for(i=0;i<3;i++)
			{
				if(max<a[i])
				{
					max=a[i];
				}
			}
			printf("min=%d",max);
			break;
		}

		case 3:
		{
			int a,b,c,mult;
			printf("Enter 3 value=");
			scanf("%d%d%d",&a,&b,&c);

			mult=a*b*c;

			printf("multiplication=%d",mult);
			break;
		}

		case 4:
		{
			int a[3],i,sum=0;
			for(i=0;i<3;i++)
			{
				printf("Enter value=");
				scanf("%d",&a[i]);
			}
			for(i=0;i<3;i++)
			{
				sum=sum+a[i];
			}
			printf("sum=%d",sum);
			break;
		}

		 default:
		 {
			printf("wrong choice");
		 }
	}

	getch();
}