#include<stdio.h>
float amount_e();
int main(){
	float e;
	e=amount_e();
	printf("%g",e);
return 0;
}

float amount_e(){
	
int x=2,f=1,y,i=0;
float e=2,a;
		for(;;){
			y=x+i;

		while(y>1){
			f*=y;
			y--;
		}
		a=(float)1/f;
		if(a<0.0001)
		break;
		e+=a;
		f=1;
		i++;
		
}	
return e;	

}
