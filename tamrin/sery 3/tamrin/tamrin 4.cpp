#include<stdio.h>
void contr(int);//contrary
int main(){
	int n;
	scanf("%d",&n);
	contr(n);
return 0;	
}
void contr(int n){
	int i;
	float x;
	if(n>0){
	scanf("%f",&x);
	contr(n-1);
	printf("%f\n",x);
	}	
return;	
}
