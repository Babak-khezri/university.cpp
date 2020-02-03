#include<stdio.h>
int main()
{
	int i,j,a;
	for(i=1;i<=20;i++)
	{
    	for(j=1;j<=20;j++)
    		printf("%5d",i*j);
    	printf("\n");
	}
	printf("press esc to end:");
	scanf("%d",a);
	return 0;
}
