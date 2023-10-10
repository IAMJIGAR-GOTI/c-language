#include<stdio.h>
#include<conio.h>
void main()
{
      int n,temp,sum=0;
      clrscr();

      printf("Enter value=");
      scanf("%d",&n);

      while(n!=0)
      {
	temp=n%10;
	sum=sum+temp;
	n=n/10;
      }
      printf("Addition=%d",sum);

      getch();
}