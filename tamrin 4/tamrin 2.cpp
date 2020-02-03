#include<stdio.h>
int main()
{
	int m,i,j,n,k;
	int a[12][2]={1,0,2,0,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,12,0};
	for(;;)
	{
		printf("Enter the month:");
		scanf("%d",&m);
		if(m==0) break;
		printf("Enter the number of the sell:");
		scanf("%d",&n);
		for(i=0;i<12;i++){
			if(m==a[i][0])
				for(k=0;k<n;k++)
					a[m-1][1]++;		
	}
}
	printf("month\titems\thistogram\n");
	for(i=0;i<12;i++){
		for(j=0;j<2;j++){
	printf("%d\t",a[i][j]);
	
}
	for(k=0;k<a[i][1];k++)
	printf("*");
	printf("\n");
	
	}
	return 0;
}

