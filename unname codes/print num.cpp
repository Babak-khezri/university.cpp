#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int  main()
{	
	int x , i=0;
	int a ,c;

	scanf("%d",&x);
	int copy=x;
	while(x>=1)
	{
		i++;
		x/=10;
	}
	c=i;
	x=copy;
	for(i=c-1;i>=0;i--)
	{
		x/=pow(10,i);
		a=x%10;
		printf("%d: ",a);
		for(int i=0;i<a;i++)
			printf("%d",a);
		printf("\n");
		x=copy;
	}

}
