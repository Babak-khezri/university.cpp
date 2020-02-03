#include<stdio.h>
int main(){
	int n;
	printf("enter n:");
	scanf("%d",&n);
	int i, x = 2, y=0, count = 0;
	for(x=2;x<n;x++){

		for(i=2;i<x;i++){
			if(x%i==0)
			count++;
		}
		if(count == 0)
		y++;
		printf("%d\t",x);
		count=0;
	}
	printf("\nthe number of first numbers = (%d)",y);
}
