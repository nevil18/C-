#include<stdio.h>

struct emp{
	 int emp id;
	 char emp name;
	 int emp age;
	 char emp role;
	 char emp city;
	 char emp experience;
     char emp company name;
	
};

void main()
{
	int i,n;
	
	printf("enter n: ");
	scanf("d",&n);
	struct emp a[n];
	

	
	for(i=0;i<n;i++)
	{
		printf("(%d/%d): ",i+1,n);
		printf("enter id:");
		scanf("%d",&a[i].id);
		printf("enter name:");
		scanf("%s",&a[i].name);
		printf("enter age:");
		scanf("%d",&a[i].age);
		printf("enter role:");
		scanf("%s",&a[i].role);
		printf("enter city:");
		scanf("%s",&a[i].city);
		printf("enter experience:");
		scanf("%d",&a[i].experience);
		printf("enter company name:");
		scanf("%s",&a[i].name);
		
	}
	
		printf("id\tname\tage\tcourse\tcity\tstd\tschool\n====== ====== ====== ====== ====== ====== ======\n");
	for(i=0;i<3;i++)
	{
		printf("%d\t%s\t%d\t%s\t%s\t%d\t%s\n :",a[i].id,a[i].name,a[i].age,a[i].course,a[i].city,a[i].std,a[i].school);
	}
}
