#include<stdio.h>
#include<conio.h>
main()
{
	int i,digit=0;
	clrscr();
	printf("enter i: ");
	scanf("%d",&i);

	while(i!=0)
	{
		i=i/10;
		digit++;
	}
	if(digit!=0)
	{
		printf("%d",digit);
	}
 getch();
}