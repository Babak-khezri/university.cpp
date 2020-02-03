#include<stdio.h>
int gcd(int,int);
main(){
	int a , b , x , y ;
	scanf("%d %d",&a,&b);
	if(a>b){
		x=a;
		y=b;
}
	else{
		x=b;
		y=a;
}
	printf("the GCD for %d & %d is %d.",a,b,gcd(x,y));	
}
int gcd(int a,int b){
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}

