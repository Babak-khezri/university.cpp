#include<stdio.h>
#include<math.h>
float tavan(int);
main(){
	int N ;
	printf("plz enter N:\n");
	scanf("%d",&N);
	printf("%f",tavan(N));
}
float tavan(int N){
	
	int i;
	float x=1 , a;

	for(i=1;i<=N;i++){
		a=1/pow(2,i);
		x+=a;	
	}
return x;
	
}
