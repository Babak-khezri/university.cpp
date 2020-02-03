#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define max 20
int i,j,k;
void tara(int[][max],int,int);
void mult(int[max][max],int[max][max],int,int);
///////////////////////////////////////////////
int main(){
	int mat[max][max],m,n;
	printf("Enter m*n:\n");
	scanf("%d %d",&m,&n);
	printf("now Enter the numbers:\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&mat[i][j]);
///////////////////////////////////////////////geting matris		
		tara(mat,m,n);
	return 0;
	}
void tara(int a[][max],int m,int n)
{
	int b[max][max];
	int c[m][n];
	
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			c[i][j]=a[i][j];
	printf("your matrix:\n");
	
	for(i=0;i<m;i++){
	
		for(j=0;j<n;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
		}
	printf("The transpose matrix :\n");
	
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			b[i][j]=a[j][i];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			
			printf("%d\t",b[i][j]);
		printf("\n");
		}
		mult(a,b,m,n);
return;
}
void mult(int a[][max],int b[][max],int m,int n)
{
	int c[m][m],sum=0;
	for(i=0;i<m;i++)
		for(j=0;j<m;j++){
			for(k=0;k<n;k++)
				sum+=a[i][k]*b[k][j];
			c[i][j]=sum;
			sum=0;
				
		}
	printf("The multiplication of matrixs :\n");
	for(i=0;i<m;i++){
		for(j=0;j<m;j++)
			printf("%d\t",c[i][j]);
		printf("\n");
	}
}
