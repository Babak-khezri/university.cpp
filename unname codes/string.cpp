#include<stdio.h>
#include<string.h>
#include<ctype.h>
//#define max 50
void func(char[]);
int main(){
	char str[]="abcdefghiklmnopqrstuvwxyz";
	//char str2[max];
	func(str);
		
	return 0;
}
void func(char str[]){
	int i , j=0;
	printf("%c",str[0]);
	for(i=1;str[i];i++)
	{
		i=i+j;
		printf("%c",str[i]);
		j++;
	}
	return;	
}
