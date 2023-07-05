#include<stdio.h>

void main()
{
	int x,y;
	int *ptr1,*ptr2;
	
	printf("enter x :");
	scanf("%d",&x);
	printf("enter y :");
	scanf("%d",&y);
	
	ptr1=&x;
	ptr2=&y;
	
	printf("before swaping variable :\n x: %d\n y: %d\n",*ptr1,*ptr2);
	*ptr1=*ptr1+*ptr2;
	*ptr2=*ptr1-*ptr2;
	*ptr1=*ptr1-*ptr2;
	printf("after swaping variable :\n x: %d\n y: %d\n",*ptr1,*ptr2);
	
}
