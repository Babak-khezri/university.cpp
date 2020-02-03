#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 55
int main()
{
	int n,i,j;
	scanf("%d",&n);
	char name[max][max];
	for(i=0;i<n;i++)
		scanf("%s",name[i]);
	for(i=1;i<n;i++){
	
		for(j=i-1;j>=0;j--)
			printf("%s: salam %s!\n",name[i],name[j]);
		
		}
	for(i=0;i<n;i++)
	{
		printf("%s: khodafez bacheha!\n",name[i]);
		for(j=i+1;j<n;j++)
		printf("%s: khodafez %s!\n",name[j],name[i]);
	}
}
