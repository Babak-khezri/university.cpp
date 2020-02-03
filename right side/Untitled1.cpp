#include<stdio.h>
int main(){
	int i , j , x = 5;
	for(i=1; i<=5; i++){
		for(j=1 ; j<=x ;j++){
		
			printf("%d\t",j);
		}
		printf("\n\t");
		
		if(i==2)
		printf("\t");
		
		if(i==3)
		printf("\t\t");
		
		if(i==4)
		printf("\t\t\t");
		
		if(i==5)
		printf("\t\t\t\t");
		
		
		
		x--;
	}
	
}
