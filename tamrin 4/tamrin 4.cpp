#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define max 11
#include<math.h>
int i, j;
void check(char[]);
void calc(char[]);
int main()
{
	char str[max];
	scanf("%s",str);
	check(str);
	return 0;
}
void check(char str[])
{
	int x=0;
	for(i=0;str[i];i++)
		if(!(isxdigit(str[i])))
		{
			x++;
			break;
		}
		if(x==1)
			printf("its is not in base of 16");
		if(x==0)
			calc(str);
}
void calc(char str[])
{
	int x=strlen(str)-1;
	int sum = 0 , f;
	for(i=0;str[i];i-=-1)
	{
		if(str[i]=='a')
			sum+=10*pow(16,x);
		if(str[i]=='b')
			sum+=11*pow(16,x);
		if(str[i]=='c')
			sum+=12*pow(16,x);
		if(str[i]=='d')
			sum+=13*pow(16,x);
		if(str[i]=='e')
			sum+=14*pow(16,x);
		if(str[i]=='f')
			sum+=15*pow(16,x);
		if(isdigit(str[i]))
		{
			f=str[i]-'0';
			sum+=f*pow(16,x);
		}
		x+=-1;
	}
		printf("%d",sum);
				
}
