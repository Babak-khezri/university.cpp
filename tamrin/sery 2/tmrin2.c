#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int year2,month2,day2; //birth
	scanf("%4d/%2d/%2d",&year2,&month2,&day2);
	
	int year1,month1,day1; //aknon
	scanf("%4d/%2d/%2d",&year1,&month1,&day1);
	
	int year3,month3,day3;
	
	 day3=day1-day2;
	 if(day3<0){
	 	day3+=30;
	 	month1--;
	 }
	 month3=month1-month2;
	 if(month3<0){
	 	month3+=12;
	 	year1--;
	}
	year3=year1-year2;
	
	printf("%d Years, %d Months and %d days",year3,month3,day3);
	
	
	return 0;
}
