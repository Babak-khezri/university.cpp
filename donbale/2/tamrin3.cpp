#include<stdio.h>
int fact(int);
float amount_e();
main(){
	printf("%f",amount_e());
}
int fact(int x){
	int f=1;
	while(x > 0){
		f *= x;
		x--;}
return f;
}
float amount_e(){
int n=2,i=0;
float e=2,a;
	for(;;){
		a=(float)1/fact(n+i);
		e+=a;
		i++;
		if(a<0.0001)
		break;
}	
return e;	
}
