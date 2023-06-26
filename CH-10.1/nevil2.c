#include<stdio.h>

void u()
{
	int a;
	
	printf("enter a: ");
	scanf("%d",&a);
	
	if(a%3==0 && a%5==0)
	{
		printf("The given number is divisible by both 3 & 5");
	}
	
	else
	{
		printf("The given number is not divisible by both 3 & 5");
	}
	

}

void main()
{
	u();
}
