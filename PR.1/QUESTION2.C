#include<stdio.h>
#include<conio.h>
main()

{
	int a=100, HRA=10, DA=5, TA=8;
	clrscr();
	HRA=a*10/100;
	DA=a*5/100;
	TA=a*8/100;
	printf("output: %d",a+HRA+DA+TA);
	getch();
}