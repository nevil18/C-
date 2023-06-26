#include<stdio.h>

void main()
{
	int com,i,len;
	char name[20],rev[20];
	
	printf("enter name: ");
	gets(name);
	
	strcpy(rev,name);
	
	len = strlen(name);
	
	strrev(name);
	com = strcmp(name,rev);

	if(com==0){
		printf("palindrome");
	}
	else{
		printf("non palindrome");
	}
	
}


