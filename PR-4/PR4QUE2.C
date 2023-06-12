#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k=11;
	clrscr();

	for(i=11;i<=15;i++)
	{
		for(j=11;j<=i;j++)
		{
		printf("%d ",k);
		k++;
		}
	printf("\n");
	}
 getch();
}