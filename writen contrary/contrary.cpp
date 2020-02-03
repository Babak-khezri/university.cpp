#include<stdio.h>
void contr(int);//contrary
main(){
	int n;
	printf("enter n:");
	scanf("%d",&n);
	printf("now enter the numbers:\n");
	contr(n);	
}
void contr(int n){
	int i;
	float x;
	if(n>0){
	scanf("%f",&x);
	contr(n-1);
	printf("%.2f\n",x);
	}	
return;	
}
