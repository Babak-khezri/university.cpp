#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define max 10000
int main()
{
	char str[max];
	int i;
	scanf("%s",str);
	for(i=0;str[i];i++)
		if(isupper(str[i]))
			str[i]=tolower(str[i]);
	for(i=0;str[i];i++)
	{
		if(str[i]!='a'&&str[i]!='o'&&str[i]!='y'&&str[i]!='i'&&str[i]!='u')
			printf(".%c",str[i]);	
	}
}
