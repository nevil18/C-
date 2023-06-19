#include<stdio.h>

main()
{
	int r,c;
	
	printf("enter r: ");
	scanf("%d",&r);
	printf("enter c: ");
	scanf("%d",&c);
	
	int a[r][c],i,j;
	 
	 for(i=0;i<r;i++)
	 {
	 	for(j=0;j<c;j++)
	 	{
	 		printf("enter a[%d][%d]: ",i,j);
	 		scanf("%d",&a[i][j]);
		 }
	 }
	 
	int row,col,sum=0,sum2=0;
	
	printf("enter row: ");
	scanf("%d",&row);
	
	
	printf("elements of row : ");
	 for(i=0;i<r;i++)
	 {
	 	for(j=0;j<c;j++)
	 	{
	 		if(i == row)
	 		{
	 		printf("%d: ",a[i][j]);
	 	    sum+=a[i][j];
	 	    }
	    }
	 }

	printf("sum of %d row is : %d",row,sum);
  
  
  	printf("enter column: ");
	scanf("%d",&col);
	
	
	printf("elements of column : ");
	 for(i=0;i<r;i++)
	 {
	 	for(j=0;j<c;j++)
	 	{
	 		if(i == col)
	 		{
	 		printf("%d: ",a[i][j]);
	 	    sum2+=a[i][j];
	 	    }
	    }
	 }

	printf("sum of %d column is : %d",col,sum2);
  
}

