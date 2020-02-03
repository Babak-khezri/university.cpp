#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[10]) {
	
	int number=0 , left_over;
  
   scanf("%d", &number);
   
   while(number!=0){
   	
   	left_over = number % 10;
     number/=10;
     printf("\a\n%d",left_over);
   }

	return 0;
}
