#include<stdio.h>
#define max 50
int main(){
	int i,x,a[max],b[max],c[max],j=0;
	int m,n;
	printf("enter m*n:\n");
	scanf("%d %d",&m,&n);
	printf("enter array:\n");
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	x=m+n;
		for(i=0;i<m;i++){
			c[i]=a[i];
		}
	for(i=m;i<x;i++){
	
		c[i]=b[j];
		j++;}
	for(i=0;i<x;i++)
		printf("%d",c[i]);

}
