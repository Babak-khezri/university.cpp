#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 50
char user[max], pas[max];
void Enter();
void join();
int main(){
	printf("1_Enter \n2_join\n");
	int x;
	scanf("%d",&x);
	switch(x){
		case 1:
			getchar();
			Enter();
			break;
		case 2:
			join();
			break;	
	}
	return 0;
}	
void Enter(){
	system("cls");
	char u[max], p[max];
	printf("Enter your usename: ");
	gets(u);
	//getchar();
	printf("Enter your basword: ");
	gets(p);
	//getchar();
	if(!(strcmp(u,user))&&!(strcmp(p,pas)))
		printf("you are in");
	else 
		printf("wrong username or pasword")	;
}
void join(){
	system("cls");
	printf("enter username: ");
	getchar();
	gets(user);
	printf("Enter pasword : ");
	gets(pas);
	/*printf("press any key to go back to Enter page:");
	getchar();*/
	Enter();
}
