#include<stdio.h>
#define max 50
int main(){
	int n , count=0 , k=0 , y ;
	int a[max] , b[max];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);		
	for(int i=n-1;i>=0;i--){
		for(int j=i-1;j>=0;j--){
			if(a[i]==a[j])
			count++;
			}			
		if(count==0){
			b[k]=a[i];
				k++;
			}
		else
			count=0;
	}
	y=k-1;
	printf("[");
	for(y;y>=1;y--)
	printf("%d,",b[y]);
	printf("%d]",b[0]);
return 0;	
}
