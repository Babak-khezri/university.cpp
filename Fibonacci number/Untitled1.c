#include<stdio.h>
void fibo(int);
 main()
 {
	int n;
	printf("enter n:");
    scanf("%d",&n);
	fibo(n);
}
void fibo(int n)
{
	int x=1 ,y=1 ,z ,i=0;
    printf("%d\t%d\t",x,y);
    for(i=1;i<n;i++)
	{
        z=x+y;
        printf("%d\t",z);
        x=y;
        y=z;
	}
return;
}
