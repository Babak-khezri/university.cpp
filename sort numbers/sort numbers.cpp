#include<stdio.h>
#include<stdlib.h>
#define max 100
int main(){
	int a[max];
	int i , m , j,min;
	printf("enter m :\n");
	scanf("%d",&m);
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
//	get the numbers
	for(i=0;i<m;i++)
		for(j=i+1;j<m;j++)
			if(a[i]>a[j]){
				min = a[i];
				a[i] = a[j];
				a[j] = min;	
			}
	for(i=0;i<m;i++)
	printf("%d",a[i]);
	
	return 0;
}
