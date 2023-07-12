#include<stdio.h>

struct student{
	int id;
	char name[20];
	int age;
	char course[20];
	char city[20];
	int std;
	char school[20];
	
};

void main()
{
	int i;
	struct student a[3];
	

	
	for(i=0;i<3;i++)
	{
		printf("%d: ",i+1);
		printf("enter id:");
		scanf("%d",&a[i].id);
		printf("enter name:");
		scanf("%s",&a[i].name);
		printf("enter age:");
		scanf("%d",&a[i].age);
		printf("enter course:");
		scanf("%s",&a[i].course);
		printf("enter city:");
		scanf("%s",&a[i].city);
		printf("enter std:");
		scanf("%d",&a[i].std);
		printf("enter school:");
		scanf("%s",&a[i].school);
		
	}
	
		printf("id\tname\tage\tcourse\tcity\tstd\tschool\n====== ====== ====== ====== ====== ====== ======\n");
	for(i=0;i<3;i++)
	{
		printf("%d\t%s\t%d\t%s\t%s\t%d\t%s :",a[i].id,a[i].name,a[i].age,a[i].course,a[i].city,a[i].std,a[i].school);
	}
}
