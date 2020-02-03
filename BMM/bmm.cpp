#include<stdio.h>
int main(){
	int x , y ,i,bmm;
	printf("enter x and y:\n");
	scanf("%d%d",&x,&y);
	for(i=2;i<x;i++){
		if(x%i==0){
			if(y%i==0)
				bmm=i;
		}
	}
printf("%d\t",bmm);
return 0;
}
