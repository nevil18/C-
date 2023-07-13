#include<stdio.h>
void main()
{
	FILE *fp1,*fp2;
	int i,a;
	
	fp2=fopen("C:\\Users\\123\\Desktop\\new.txt","r");
	
	fscanf(fp2,"%d",&a);
	

	fclose(fp2);
	printf("data from file : %d",a);
	
	
	fp1=fopen("C:\\Users\\123\\Desktop\\neww.txt","w");
	fprintf(fp1,"%d",a);
	fclose(fp1);
	
	
}
