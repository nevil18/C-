#include<stdio.h>
#include<string.h>

main()
{
    char str[20];
	int *ptr;
	int len=0;

	
	printf("enter any string: ");
	scanf("%[^\n]",&str);
	
	len=strlen(str);
		
	ptr=&len;
	printf("len : %d",*ptr);
	
}
