#include<stdio.h>
#include<conio.h>
main()

{
	int marks;
	clrscr();
	printf("enter marks :");
	scanf("%d",&marks);
	if(marks>=90 && marks<=100)
	{
	printf("A1\n");
	}
	else if(marks>=80 && marks<90)
	{
	printf("A2\n");
	}
	getch();
}