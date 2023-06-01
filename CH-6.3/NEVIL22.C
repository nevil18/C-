#include<stdio.h>
#include<conio.h>
main()
{
       long long int n,i,factorial=1;
	clrscr();

	printf("enter n: ");
	scanf("%lld",&n);

	for(i=1; i<=n; i++)
	{
		factorial*=i;
	}
	printf("%lld",factorial);
 getch();
}