#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,min;
	clrscr();
 printf("enter a and b and c: ");
 scanf("%d%d%d",&a,&b,&c);
 min=(a<b)
	?(a<c)
		?a
		:c
	:(b<c)
		?b
		:c;
		printf("minimum value: %d\n\n",min);

 getch();
}