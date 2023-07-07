#include<stdio.h>

void main()
{
	int n,i;
	printf("enter length of array: ");
	
	n=getInt();
	
	int a[n];
	int *p[n];
	
	for(i=0;i<n;i++)
	{
		p[i]=&a[i];
	}
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d] :",i);
		scanf("%d",p[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]: %d\n",i,*p[n-i-1]);
	}
}

int getInt()
{
	int x;
	scanf("%d",&x);
	return x;
}
