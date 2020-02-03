#include<stdio.h>
void left_over(int);
void right_over(int);
main()
{
	int x;
	printf("enter x:\n");
	scanf("%d",&x);
	printf("left over is:\n");
	left_over(x);
	printf("right over is:\n");
	right_over(x);
	
}
void left_over(int x){
	
	if(x > 0){
		printf("%d\n",x%10);
		left_over(x/10);
		printf("\n");
	}
}
void right_over(int x){
	 
	 if(x>0){
	 	
	 	right_over(x/10);
	 	printf("%d\n",x%10);
	}	
}
