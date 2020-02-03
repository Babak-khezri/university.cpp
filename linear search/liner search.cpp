#include<stdio.h>
#define max 19
int main(){
	
	int n , j ;
	float a[max] , x , count=0;
	printf("enter n:");
	scanf("%d",&n);
	
	for(int i = 0;i<n;i++)
		scanf("%f",&a[i]);
	printf("Enter your goal number:");
	scanf("%f",&x);
	
	for(int i = 0;i<n;i++){
		if(x == a[i]){
			count++;
			j=i;
	}
}
	if(count == 0)
		printf("Not Found!");
	else
		printf("Have Found!\n%d",j);	
return 0;
}

