#include<stdio.h>
main()

{
	int r,c;
	
	printf("enter row: ");
	scanf("%d",&r);
	printf("enter column: ");
	scanf("%d",&c);
	
	int a[r][c],i,j,sum=0;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);	
		}
	}
	

		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i=j)
			{
				sum+=a[i][j];
			}
	    }
	}
	
	printf("sum of diagonal elements: %d",sum);
	
}
