#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[]) {
	
	srand(time(0));
	
	int ran=0,i=1,n=0,nT=0,nH=0;
	printf("enter n :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
	
	 ran = rand()%2;
	if(ran==1){
	printf("\n%d  H",i);
	nH++;
	}else if(ran==0){
	printf("\n%d  T",i);
	nT++;
}
}
		int pH=(nH*100)/n;
		int pT=(nT*100)/n;
	printf("\nResult :\n H = %d (percent %d%%)\n T = %d (percent %d%%)",nH,pH,nT,pT);
	return 0;
}
