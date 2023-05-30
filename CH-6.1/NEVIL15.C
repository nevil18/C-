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


		while(a<=b)
		{
			if(a%4== 0)
			{
			printf("%d\n",a);
			}
			a++;
		}

 getch();
}