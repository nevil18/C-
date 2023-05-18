#include<stdio.h>
#include<conio.h>
main()

{
	int a,b;
	clrscr();
	printf("enter a: ");
	scanf("%d",&a);
	printf("enter b: ");
	scanf("%d",&b);
	printf("(a+b)^2: %d",(a*a)+(b*b)+(2*a*b));
	getch();
}