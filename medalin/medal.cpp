#include<stdio.h>
#include<stdlib.h>
#define max 100
void totalGold(int[max][4]);
void withoutMedal(int[max][4]);
void bestYear(int a[max][4]);
main()
{
	int a[max][4],i;
	for(i=0;i<35;i++)
		a[i][0]=i+1360;
	
	for(i=0;i<=35;i++)
	{
		printf("%d\n",i+1360);
		int j=1;
		printf("enter the gold medas: ");
		scanf("%d",&a[i][j]);
		j++;
		printf("enter the silver medas:");
		scanf("%d",&a[i][j]);
		j++;
		printf("enter the bronze medas:");
		scanf("%d",&a[i][j]);
		
	}
	int j;
	system("cls");
	for(i=0;i<36;i++)
	{
	
		for(j=0;j<4;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
	}
	totalGold(a);
	withoutMedal(a);
	bestYear(a);
}
void totalGold(int a[max][4])
{
	int sum=0,i;
	for(i=0;i<36;i++)
	{
		sum+=a[i][1];
	}
	printf("\nall the gold medals : %d",sum);
}
void withoutMedal(int a[max][4])
{
	printf("\nthe years without medal : ");
	for(int i=0;i<36;i++)
	{
		if((a[i][1]+a[i][2]+a[i][3])==0)
			printf("%d ",i+1360);
	}		
}
void bestYear(int a[max][4])
{
	int i,j,MAX=-1;
	for(i=0;i<36;i++)
	{
		if((a[i][1]+a[i][2]+a[i][3])>MAX)
		{
			MAX = (a[i][1]+a[i][2]+a[i][3]);
			j = i;
		}	
	}
	printf("\nthe best yesr is : %d",1360+j);	
}
