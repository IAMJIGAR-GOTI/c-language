#include<stdio.h>
#include<conio.h>
void main()
{
      int a,b,c,d,e;
      clrscr();
      printf("Enter value=");
      scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

      if(a>b && a>c && a>d && a>e)
      {
	printf("1st value is max");
      }
      else if(b>c && b>d && b>e)
      {
	printf("2nd value is max");
      }
      else if(c>d && c>e)
      {
	printf("3rd value is max");
      }
      else if(d>e)
      {
	printf("4th value is max");
      }
      else
      {
	printf("5th value is max");
      }
	getch();
}
