#include <stdio.h>
int  main(){
	
	int n , x , b , c , i;
	static int a=-1000000;
	printf("enter n:\n");
	scanf("%d",&n);
	printf("now enter numbers:\n");
	
	for(i = 0;i < n;i++){
		scanf("%d",&x);
			if(x>a){
				c=b;
				b=a;
				a=x;
				}		
	}
	printf("%d and %d and %d",a,b, c);	
	return 0;
}

