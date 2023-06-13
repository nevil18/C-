#include<stdio.h>
main()
{
	int n;
	printf("enter n: ");
	scanf("%d",&n);
	
	int a[n],i,average,sum=0;
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]: ",i);
		scanf("%d",&a[i]);
		sum+=a[i];
	}

	printf("length of ar: %d",count);	
	
}

