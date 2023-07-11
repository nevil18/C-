#include<stdio.h>

int n;
int geiInt()
{
	int x;
	
	scanf("%d",&x);
	
	return x;
}

void arrayInput(int a[10][10])
{
	int i,j;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}

void arraycube(int ptr[10][10])
{
	int i,j;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("cube: %d\n",(ptr[i][j])*(ptr[i][j])*(ptr[i][j]));
		}
		printf("\n");
	}
}

void main()
{
	int i,j;
	n=getInt();
	
	int a[n][n];
	int *ptr[n][n];
	
	
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			ptr[i][j]=&a[i][j];
		}
	}
	arrayInput(a);
	printf("cube of all elements: ");
	cube(a);
}
