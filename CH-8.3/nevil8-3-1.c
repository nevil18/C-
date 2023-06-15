#include<stdio.h>

main()
{
	int r,c;
	
	printf("enter row: ");
	scanf("%d",&r);
	printf("enter column: ");
	scanf("%d",&c);
	
	int a[r][c],i,j,sum=0,ave;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
			sum+=a[i][j];
		}
	}
	
	ave=sum/(r*c);
	printf("%d ",ave);

}
