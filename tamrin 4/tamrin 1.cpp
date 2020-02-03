#include<stdio.h>
void zarb(int[][50],int[50][50],int,int);
void back(int[][50],int,int);
main(){
	int x[50][50];
	int m , n;
	scanf("%d",&m);
	scanf("%d",&n);
	
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++)
		scanf("%d",&x[i][j]);
		}
		back(x,m,n);
		
}
void back(int x[][50],int m,int n){
	
	int b[50][50];
	int c[m][n];
	
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			c[i][j]=x[i][j];

	for(int i=0;i<n;i++){
	
	for(int j=0;j<m;j++)
		b[i][j]=x[j][i];}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			
		printf("%d\t",b[i][j]);
		printf("\n");
		}
		zarb(x,b,m,n);

}
void zarb(int x[][50],int b[][50],int m,int n){
	int y[m][m];
	int zar=0;
	for(int i=0;i<m;i++)
		for(int j=0;j<m;j++)
		{
			for(int k=0;k<n;k++)
				zar += x[i][k]*b[k][j];
			y[i][j]=zar;
			zar=0;
	
		}
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<m;j++)
			printf("%d\t",y[i][j]);
		printf("\n");
		
		
		
		}
		
		
		
		
		
		
		
}

