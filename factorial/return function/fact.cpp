#include<stdio.h>
int fact(int);
main(){
	int n;
	printf("plz enter n:\n");
	scanf("%d",&n);
	printf("%d",fact(n));	
}
int fact(int n){
	if(n <= 1)
		return 1;
	else
		return n*fact(n - 1);
}
