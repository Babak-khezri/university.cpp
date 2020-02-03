#include<stdio.h>
#define max 20
struct data{
	int y , m , d;
};
struct student
{
	char fname[max], lname[max], id[max];
	int term;
	float ave;
	struct data st;
};
int main()
{
	struct student A;
	printf("Enter the name:");
	scanf("%s",A.fname);
	printf("Enter the last name:");
	scanf("%s",A.lname);
	printf("Enter the id of student:");
	scanf("%s",A.id);
	printf("Enter the term:");
	scanf("%d",&A.term);
	printf("Enter the birth day:");
	scanf("%d %d %d",&A.st.y,&A.st.m,&A.st.d);
	printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_");
	printf("\nstudent name : %s\nstudent last name : %s",A.fname,A.lname);
	printf("\nstudent id : %s\nstudents term : %d\n",A.id,A.term);
	printf("the sturdent brith day is %d/%d/%d",A.st.y,A.st.m,A.st.d);
	return 0;
}
