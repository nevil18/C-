#include<stdio.h>

void main()
{
	int cmp;
	char str1[20],str2[20];
	
	printf("enter str1: ");
	gets(str1);
	
	
	strcpy(str2,str1);

	
	strrev(str2);
	cmp = strcmp(str1,str2);

	if(cmp==0){
		printf("palindrome");
	}
	else{
		printf("non palindrome");
	}
	
}


