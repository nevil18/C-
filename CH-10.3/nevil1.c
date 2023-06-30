#include<stdio.h>

int fact(int n)
{
	if(n>0)
	{
		return n*fact(n-1);
	}
	else
	{
	return 1;
    }
}		

void main()
{
	int n,multi;
	printf("enter n:");
	scanf("%d",&n);
	
	multi=fact(n);
	
	printf("multi: %d",multi);
}

