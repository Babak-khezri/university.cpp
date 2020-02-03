#include<stdio.h>
#include<math.h>
main(){
int x , a,b=0,i;
printf("put number:");
scanf("%d",&x);
for(i=2;i<x;i++){


a=(x%i);

if(a==0)
b++;
}
if(b==0)
printf("adad kamel ast");
else
    printf("adad kamel nist");
}
