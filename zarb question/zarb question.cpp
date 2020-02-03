

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int t=0,f=0;
int main(){
	for(;;){
		srand(time(NULL));
		int x , y , a , g;
	
		x=rand()%9+1;
		y=rand()%9+1;
		printf("%d * %d=\n",x,y);
	
		printf("your answer:");
		scanf("%d",&a);
		
		if(a==x*y){
			printf("your answer is correct\n\n\a");
			t++;
		}
		else{
			printf("your answer is incorrect\n\n");
			f++;
			
		}
		if(t==10||f==10) break;
	}
	printf("your true answers:%d\nyour wrong answers:%d",t,f);
	char ch;
	for(int i=0;i<2;i++){
	ch=getchar();
}
}
