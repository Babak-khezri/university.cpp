#include<stdio.h>
#include<string.h>
#define max 20
void sort(char [][max],int);
int main(){
	int i, n;
	char city[10][max];
	
	printf("Enter the number if cities(max = 10):");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("city <%d>:",i+1);
		scanf("%s",city[i]);
		
	}
	sort(city,n);
	printf("\nthe sorted list is:\n");
	for(i=0;i<n;i++)
		printf("%s\n",city[i]);
}
void sort(char city[][max],int n)
{
	int i,j;
	char temp[max];
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(strcmpi(city[i],city[j])>0)
			{
				strcpy(temp,city[i]);
				strcpy(city[i],city[j]);
				strcpy(city[j],temp);
			}
}
