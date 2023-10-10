#include<stdio.h>
#include<conio.h>
void main()
{
	char c[100];
	int i,count=0,upp=0,low=0,space=0,spcl=0,digit=0,vowels=0,words=1;
	clrscr();

	printf("Enter String=");
	gets(c);

	puts(c);

	for(i=0;c[i]!=NULL;i++)
	{
		printf("\nc[%d]=%c",i,c[i]);
		count++;

		if(c[i]>=65 && c[i]<91)
		{
			upp++;
		}
		if(c[i]>=97 && c[i]<123)
		{
			low++;
		}
		if(c[i]==32)
		{
			space++;
			words++;
		}
		if(c[i]>=33 && c[i]<=47 || c[i]>=58 && c[i]<=64 || c[i]>=91 && c[i]<=96 || c[i]>=123 && c[i]<=126)
		{
			spcl++;
		}
		if(c[i]>=48 && c[i]<=57)
		{
			digit++;
		}
		if(c[i]==65 || c[i]==97 || c[i]==69 || c[i]==101 || c[i]==73 || c[i]==105 || c[i]==79 || c[i]==111 || c[i]==85 || c[i]==117)
		{
			vowels++;
		}
	}

	printf("\n\nTotal char in string=%d",count);
	printf("\n\nTotal uppercase in string=%d",upp);
	printf("\n\nTotal lowercase in string=%d",low);
	printf("\n\nTotal space in string=%d",space);
	printf("\n\nTotal special char in string=%d",spcl);
	printf("\n\nTotal digit in string=%d",digit);
	printf("\n\nTotal vowels in string=%d",vowels);
	printf("\n\nTotal words in string=%d",words);

	getch();
}