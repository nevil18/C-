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
	if(a<b)
	{
	printf("minimum value of %d\n",a);
	}
	else if(a>b)
	{
	printf("minimum value of %d\n",b);
	}
	else
	{
	printf("equal\n");
	}
	getch();
}