#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	clrscr();

	printf("enter n: ");
	scanf("%d",&n);
		while(n>=1)
		{
			if(n%2== 1)
			{
			printf("%d\n",n);
			}
			n--;
		}

 getch();
}