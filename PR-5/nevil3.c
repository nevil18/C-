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
	 
	 for(i=0;i<r;i++)
	 {
	 	for(j=0;j<c;j++)
	 	{
	 	printf("%d ",a[j][i]);
		}
		printf("\n");
	 }
	 
}
