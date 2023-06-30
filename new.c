#include<stdio.h>

void arrayinput(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}

int getint()
{
	int a;
	printf("enter int: ");
	scanf("%d",&a);
	return a;
}

int arraymin(int a[],int n){
	int i,j;
	for(i=0;i<n;i++)
	{
			for(j=i+1;j<n;j++)
	{
		
			
		if(a[i]>a[j])
		{
			a[i]=a[i]+a[j];
			a[j]=a[i]-a[j];
			a[i]=a[i]-a[j];
		}
	
}
	
}
	
		return a[0];
}

void main()
{
	int n,min;
	n=getint();
	int a[n];
	arrayinput(a,n);
	min=arraymin(a,n);
    printf("min: %d",min);
	
}

