#include<stdio.h>
main()
{
	int n;
	printf("enter n: ");
	scanf("%d",&n);
	
	int a[n],c[n],b[n],i;
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("enter b[%d]: ",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<n;i++)
	{
			c[i]=a[i]+b[i];
	printf("c[i]: %d\n",c[i]); 
	}
}

