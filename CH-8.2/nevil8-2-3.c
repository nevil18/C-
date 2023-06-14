#include<stdio.h>

main()
{
	int n;
	
	printf("enter n: ");
	scanf("%d",&n);
	
	int a[n],i,b[i];
	
	for(i=0;i<n;i++)
	{
	    printf("enter a[%d]: ",i);
	    scanf("%d",&a[i]);	
	    b[i]=a[i]*a[i];
	}
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]: %d\t b[%d]: %d\n",i,a[i],i,b[i]);
	}
}
