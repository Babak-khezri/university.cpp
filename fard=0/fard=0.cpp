#include<stdio.h>
#include<math.h>
int flo(float);
float fard(float);
main(){
	
	int n,i,j,a;
	
	float x,copy2,x1,x2;
	printf("enter the x:");
	scanf("%f", &x);
	
	n=flo(x);
	x1=fard(x);
	x2=x1*pow(10,n);//x2=2132
	
	for(i=0;i<n;i++){
		a=fmod(x2/pow(10,i),10);			
		if(a%2==1)
		x2-=(a*pow(10,i));
	}
			printf("%f",x2*pow(10,-n));
}
int flo(float x){
	
	float a, b;
	int i;
	for(i=1;a!=b;i++){
		a=(x*pow(10,i));
		b=round(x*pow(10,i));
	}
		return --i;		
}
float fard(float x){
	int i,j,n;
	float copy;
	copy=x;
	
	for(i=0;x>=1;i++)
		x/=10;

		for(j=0;j<i;j++){
			n=fmod((copy/pow(10,j)),10);	
		
			if(n%2==1){
			
				copy-=n * pow(10,j);	
			}
		}
return copy;
}
