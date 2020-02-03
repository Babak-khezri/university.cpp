#include <stdio.h> 
main() 
{ 
int i , j;
    int a[3][3];
    for(int i=0;i<3;i++)
   		for(int j=0;j<3;j++)
   			scanf("%d",&a[i][j]);
   	
	for( i=2;i>=0;i--){
	
   		for(j=2;j>=0;j--)
   			printf("%d\t",a[i][j]);
			   printf("\n");}
} 
