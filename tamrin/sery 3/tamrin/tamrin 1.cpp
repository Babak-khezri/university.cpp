#include<stdio.h>
#define pi 3.14
float area(float);
float perimeter(float);
int main(){
	float r;
	//printf("enter radius:");
	scanf("%f",&r);
	printf("s=%.2f\n",area(r));
	printf("p=%.2f",perimeter(r));	
return 0;
}
float area(float r){
	return pi*r*r;	
}
float perimeter(float r){
	return 2*pi*r;
}
