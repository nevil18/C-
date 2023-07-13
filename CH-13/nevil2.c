#include<stdio.h>
void main()
{
	FILE *fp;
	int i;
	 fp=fopen("C:\\Users\\123\\Desktop\\new2.txt","w");
	 
	 for(i=1;i<=50;i++)
	 {
	 	if(i%3==0 && i%5==0)
	 	{
	 		fprintf(fp,"%d\n",i);
		 }
	 }
	 
	 fclose(fp);
}
