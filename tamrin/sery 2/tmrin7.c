#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	char name[30];
	printf("enrer name:");
	scanf("%s",&name);

	int stu_num;
	printf("enter student number:");
	scanf("%d",&stu_num);

	char course1[20];
	int unit1;
	printf("enter course 1:");
	scanf("%s",&course1);
	printf("enter unit1:");
	scanf("%d",&unit1);

	char course2[20];
	int unit2;
	printf("enter course 2:");
	scanf("%s",&course2);
	printf("enter unit2:");
	scanf("%d",&unit2);

	char course3[20];
	int unit3;
	printf("enter course 3:");
	scanf("%s",&course3);
	printf("enter unit3:");
	scanf("%d",&unit3);

	printf("student number=%s\nstudent number=%d",name,stu_num);
	printf("\n  course\tunit");
	printf("\n1) %s\t %d",course1,unit1);
	printf("\n2) %s\t %d",course2,unit2);
	printf("\n3) %s\t %d",course3,unit3);

	int total = unit1 + unit2 + unit3;
	printf("\ntotal unit = %d",total);
    int num1, num2, num3;
    int *p1, *p2, *p3;

    //taking input from user
    printf("Enter First Number: ");
    scanf("%d",&num1);
    printf("Enter Second Number: ");
    scanf("%d",&num2);
    printf("Enter Third Number: ");
    scanf("%d",&num3);

    //assigning the address of input numbers to pointers
    p1 = &num1;
    p2 = &num2;
    p3 = &num3;
    if(*p1 > *p2)
    {
	if(*p1 > *p3)
	{
		printf("%d is the largest number", *p1);
	}
	else
	{
		printf("%d is the largest number", *p3);
	}
    }
    else
    {
	if(*p2 > *p3)
	{
		printf("%d is the largest number", *p2);
	}
	else
	{
		printf("%d is the largest number", *p3);
	}
    }
    return 0;
}


