#include<stdio.h>
int main(){
    int h,min,hGTM,minGTM;
    scanf("%d:%d",&h,&min);
    if(min<30){
        h-=1;
        min+=60;
    }
    minGTM=min-30;
    if(h<3){
        h+=24;
    }
    hGTM=h-3;
    printf("The Time in Greenwich is : %02d:%02d",hGTM,minGTM);
    return 0;









}
