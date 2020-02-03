#include<stdio.h>
#define pi 3.1415
float area(float);
float perimeter(float);
main(){
	float r;
	printf("enter radius:");
	scanf("%f",&r);
	printf("the area of circle is : %.4f\n",area(r));
	printf("the perimeter of circle is : %.4f",perimeter(r));	
}
float area(float r){
	return pi*r*r;	
}
float perimeter(float r){
	return 2*pi*r;
}
