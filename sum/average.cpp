#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float average(int);


main(){
	int n , x,i;
	float sum=0;
	printf("enter n:");
	scanf("%d",&n);
	printf("\nnow enter the integers:\n");
	for(i=1;i<=n;i++){
		scanf("%d",&x);
		sum+=average(x);
	}
	printf("the average is=%.2f",sum/n);
	
}
float average(int x){
	int sum=0;
	sum+=x;
	return sum;	
}
