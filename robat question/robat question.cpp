#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define max 300
main()
{	
int i,j;
	char map[max][max][10];
	int n,m,k,counter=1;
	char str[max];
	char o[2]={"#"};
	scanf("%d %d %d",&n,&m,&k);
	int x,y;
	scanf("%d %d",&x,&y);
	x--;
	y--;
	scanf("%s",str);
	getchar();
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{	
			scanf("%c",&map[i][j]);
		}
		getchar();
	}	
	strcpy(map[x][y],"1");
	///////////////////////////////////
	for(i=0;str[i];i++)
	{
		if(str[i]=='R')
		{	
			while(strcmp(map[x][y+1],"1")==0||strcmp(map[x][y+1],o)==0)
			{	
				
				if(strcmp(map[x][y+1],o)==0)	
				{
				
				strcpy(map[x][y+1],"1");
				y++;
				counter++;
				}
				if(strcmp(map[x][y+1],"1")==0)
				y++;
			}	
			
		}
		if(str[i]=='L')
		{
			while(strcmp(map[x][y-1],"1")==0||strcmp(map[x][y-1],o)==0)
			{	
				
				if(strcmp(map[x][y-1],o)==0)	
				{
				
				strcpy(map[x][y-1],"1");
				y--;
				counter++;
				}
				if(strcmp(map[x][y-1],"1")==0)
				y--;
			}	
			
		}
		if(str[i]=='U')
		{
			while(strcmp(map[x-1][y],"1")==0||strcmp(map[x-1][y],o)==0)
			{	
				
				if(strcmp(map[x-1][y],o)==0)	
				{
				
				strcpy(map[x-1][y],"1");
				x--;
				counter++;
				}
				if(strcmp(map[x-1][y],"1")==0)
				x--;
			}	
		}
		if(str[i]=='D')
		{
			while(strcmp(map[x+1][y],"1")==0||strcmp(map[x+1][y],o)==0)
			{	
				
				if(strcmp(map[x+1][y],o)==0)	
				{
				
				strcpy(map[x+1][y],"1");
				x++;
				counter++;
				}
				if(strcmp(map[x+1][y],"1")==0)
				x++;
			}	
			
		}	
	}
	
	printf("%d",counter);
/*	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{	
			printf("%s",map[i][j]);
		}
		printf("\n");
	}	*/
	return 0;
}

