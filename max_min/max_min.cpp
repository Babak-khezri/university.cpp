#include<stdio.h>
int main()
{
	int n ,i,x,max,min;
	max=-10000000;
	min=10000000;
	printf("enter n:\n");
	scanf("%d",&n);
	printf("now put numbers:\n");
	for(i=0;i<n;i++){
		scanf("%d",&x);
		if(x>max)
			max=x;
		if(x<min)
			min=x;
		
		
		
	}
	
	printf("max=%d and min=%d\n",max,min);	
	
	
	
}
