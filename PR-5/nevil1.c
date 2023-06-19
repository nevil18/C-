#include<stdio.h>

main()
{
	int n;
	
	printf("enter n: ");
	scanf("%d",&n);
	
	int a[n],i;
	
	for(i=0;i<n;i++)
	{
	printf("enter a[%d]: ",i);
	scanf("%d",&a[i]);
	
    }
	
	
	for(i=0;i<n;i++)
	{
		printf("negative elements of array: ");
		if(a[i]<0)
		{
		
		printf("%d",a[i]);
	}
	}
	
	
}
