#include<stdio.h>

main()
{
	int n,k,i;
	
	printf("enter n: ");
	scanf("%d",&n);
	printf("enter k: ");
	scanf("%d",&k);
	printf("the array is : ");
	
	for(i=n;i<=k;i++)
	{
		if (i%4==0)
		{
			printf("%d ",i);
		}
	}
}
