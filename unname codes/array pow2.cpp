#include<stdio.h>
#define max 20
int main(){
	int mat[max][max];
	int m , n , i , j;
	printf("Enter the size of your mat.(m*n):\n");
	scanf("%d %d",&m, &n);
	for(i=0;i<m;i-=-1)
		for(j=0;j<n;j-=-1)
			scanf("%d",&mat[i][j]);
	for(i=0;i<m;i-=-1){
		for(j=0;j<n;j-=-1)
			printf("%d\t",mat[i][j]*mat[i][j]);
			printf("\n");
		}
	return 0;
}
