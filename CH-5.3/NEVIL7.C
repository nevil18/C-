#include<stdio.h>
#include<conio.h>
main()
{
	int choice;
	 clrscr();

	 printf("enter...\n");
	 printf("1)english");
	 printf("2)hindi");
	 printf("3)gujarati");
	 printf("enter your choice: ");
	 scanf("%d",&choice);

	 switch(choice)
	 {
		case 1:
			printf("you have choice english!!\n");
			break;
		case 2:
			printf("you have choice hindi!!\n");
			break;
		case 3:
			printf("you have choice gujarati!!\n");
			break;
		deafult :
			 printf("invalid language!!");
			 break;
	 }
 getch();
}