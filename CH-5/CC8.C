#include<stdio.h>
#include<conio.h>
main()

{
	int a;
	clrscr();
	printf("enter a: ");
	scanf("%d",&a);

	if(a>0)
	{
	printf("positive\n");
	}
	else if(a<0)
	{
	printf("negative\n");
	}
	else
	{
	printf("neutral\n");
	}
	getch();
}