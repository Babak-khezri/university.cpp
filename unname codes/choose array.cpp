#include<stdio.h>
#define max 50
int search(int[],int);
int main(){
	int a[max],i,j,n,b;
	printf("enter size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]) ;
	
	b=search(a,n);	
		printf("%d",a[b]);
		
		}
int search(int a[],int n){
	int x;
	printf("now enter the number that want to print:");
	scanf("%d",&x);
	return x;
	
}
