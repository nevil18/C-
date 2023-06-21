#include<stdio.h>
main()
{
	char str1[20];
	int i;
	
	printf("enter name :");
	scanf("%[^\n]",&str1);
	
	for(i=0;i<20;i++)
	{
		if(str1[i] == ' ')
		{
			str1[i+1]-=32;
		}
		
		else if(i==0)
		{
			str1[i]-=32;
		}
		
	
	}
	printf("name: %s\n",str1);
}
