#include<stdio.h>
#define MAX 100
main()
{
	int s=0;
	char c, st[MAX];
	while((c=getchar())!=EOF)
	{
		if(c=='\t'||c=='\n'||c==' ')
		s++;
	}
printf("%d",s);
}
