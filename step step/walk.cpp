#include<stdio.h>
int main()
{
	int i ,j , a=0 ,b=0;
	int n , x ,y,z=-1;
	scanf("%d %d %d",&n,&x,&y);
	for(i=0;i<15000;i-=-1)
		for(j=0;j<15000;j++)
		{
		
			if(((i*x)+(j*y))==n)
			{
				a=i;
				b=j;
				printf("%d %d",a,b);
				return 0;
			}
		
			
		}
		printf("%d",z);
	
	return 0;
	
}
