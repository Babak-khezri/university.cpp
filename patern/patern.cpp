#include<stdio.h>
int main(){
	int i, j, k;
	char ch;
	for(i=0;i<5;i++){
		for(j=0;j<10-i;j++)
			printf(" ");
		for(j=0;j<=i;j++)
			printf("* ");
		printf("\n");
	}	
	for(i=0;i<5;i++){
		for(j=0;j<5-i;j++)
			printf(" ");
		for(j=0;j<=i;j++)
			printf("* ");
		for(j=0;j<8-2*i;j++)
			printf(" ");
		for(j=0;j<=i;j++)
			printf("* ");
		printf("\n");
			
	}
	ch=getchar();
	return 0;
}
