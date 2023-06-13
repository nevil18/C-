#include<stdio.h>
main()
{
	int n;
	printf("enter n: ");
	scanf("%d",&n);
	
	int a[n],i,sum=0,average;
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]: ",i);
		scanf("%d",&a[i]);
		sum+=a[i];
	}

	printf("average: %d",sum/n);	
	
}

