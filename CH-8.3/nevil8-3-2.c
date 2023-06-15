#include<stdio.h>
main()

{
	int r,c;
	
	printf("enter row: ");
	scanf("%d",&r);
	printf("enter column: ");
	scanf("%d",&c);
	
	int a[r][c],i,j,b[r][c],k[r][c];
	
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
			printf("enter b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
	    }
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		
			k[i][j]=a[i][j]+b[i][j];
	        printf("k[i][j]: %d\n",k[i][j]);
        } 
	}
	
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
	        printf("%d",k[i][j]);
        } 
        printf("\n");
	}
	
	
	
	
	

}
