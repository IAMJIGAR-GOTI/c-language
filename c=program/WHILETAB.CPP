#include<stdio.h>
#include<conio.h>
void main()
{
       int n,i=1;
       clrscr();

       printf("Enter any number=");
       scanf("%d",&n);

       while(i<=10)
       {
		printf("\n%d %d %d",n,i,i*n);
		i++;
       }


	getch();
}