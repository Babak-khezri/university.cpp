#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n=0,i=0;
    float s=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		s=s+(1/pow(2,i));


	}
	printf("%f", s);

    return 0;
}
