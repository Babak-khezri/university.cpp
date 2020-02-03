#include<stdio.h>
void prime(int);
int main(){
	int n;
	scanf("%d",&n);
	prime(n);
return 0;	
}
void prime(int n){
	int count=0 , i,x,a=0;
	x=n-1;
	for(x;x>1;x--){
		for(i=2;i<x;i++){
			if(x%i==0)
			a++;	
		}
		if(a==0)
		count++;
		a=0;
	}
printf("%d",count);
return;	
}
