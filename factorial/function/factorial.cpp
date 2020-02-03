#include<stdio.h>
int factorial(int , int);

main(){
	 
	int x , i , f=1;
	
	printf("enter number:");
	scanf("%d",&x);
	f = factorial(x,f);

	printf("%d",f);
}
int factorial(int x,int f)
{
	while(x > 1){
	
	f *= x;
		x--;;}
	return f;
}

