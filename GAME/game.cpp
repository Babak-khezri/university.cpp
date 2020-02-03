#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#define max 101
void guessw();
void snake();
void guess();
void mult();
void pow();
void chose();
int main()
{
	srand(time(NULL));
	int x;
	printf("list of the games:");
	printf("\n1_Snakes And Ladders\n2_guess the number\n3_multication\n4_power\n");
	printf("5_guess words\n6_choasen:\n");
	printf("choose game:");
	scanf("%d",&x);
	switch(x){
	case 1 :
		system("cls");
		getchar();
		snake();
		
		break;
	case 2 :
		guess();
		break;
	case 3 :
		mult();
		break;
	case 4 :
		pow();
		break;
	case 5 :
		guessw();
		break;
	case 6 :
		chose();
		break;
}
return 0;

}
void snake()
{
	srand(time(NULL));
	char ch[max]="(p_1)";
	char ch1[max];
	char num[10][10][max]={"100","99","98","97","96","95","94","93","92","91","81","82","83","84","85","86","87","88","89","90","80","79","78","77","76","75","74","73","72","71","61","62","63","64","65","66","67","68","69","70","60","59","58","57","56","55","54","53","52","51","41","42","43","44","45","46","47","48","49","50","40","39","38","37","36","35","34","33","32","31","21","22","23","24","25","26","27","28","29","30","20","19","18","17","16","15","14","13","12","11","1","2","3","4","5","6","7","8","9","10"};
	int i,j=0 ,x=36;
	int m=9,n=0;
	int y;
	for(;;)
	{
		printf("Press Enter to throw dice\n");
		getchar();
		y=rand()%6+1;
		printf("your number : %d\n",y);
		if(y==6)
		{
			printf("Now you are in game:\n");
			strcpy(ch1,num[m][n]);
			strcpy(num[m][n],ch);
			for(i=0;i<10;i++)
			{
				for(j=0;j<10;j++)
					printf("%s\t",num[i][j]);
				printf("\n\n");
			}
			break;
		}
	}
for(;;)
	{
	printf("trow dice again :");
	getchar();
	char num[10][10][max]={"100","99","98","97","96","95","94","93","92","91","81","82","83","84","85","86","87","88","89","90","80","79","78","77","76","75","74","73","72","71","61","62","63","64","65","66","67","68","69","70","60","59","58","57","56","55","54","53","52","51","41","42","43","44","45","46","47","48","49","50","40","39","38","37","36","35","34","33","32","31","21","22","23","24","25","26","27","28","29","30","20","19","18","17","16","15","14","13","12","11","1","2","3","4","5","6","7","8","9","10"};
	int y=rand()%6+1;
		if(m==9||m==7||m==5||m==3||m==1)
		{	
			if(n+y>=10)
			{
				n+=(10-(y+(n-(9-n))));
				m-=1;
				strcpy(ch1,num[m][n]);
				strcpy(num[m][n],ch);
			}
			else
			{
				n+=y;
				strcpy(ch1,num[m][n]);
				strcpy(num[m][n],ch);
			}
			system("cls");
			printf("**********************************%d\n",y);
			for(i=0;i<10;i++)
			{
				for(j=0;j<10;j++)
					printf("%s\t",num[i][j]);
				printf("\n\n");
			}
			continue;
		}
		if(m==8||m==6||m==4||m==2)
		{	
			if(n<y)
			{
				n-=(10-(y-(n-(9-n))));
				m-=1;
				strcpy(ch1,num[m][n]);
				strcpy(num[m][n],ch);
			}
			else
			{
				n-=y;
				strcpy(ch1,num[m][n]);
				strcpy(num[m][n],ch);	
			}
			system("cls");
			printf("**********************************%d\n",y);
			for(i=0;i<10;i++)
			{
				for(j=0;j<10;j++)
				printf("%s\t",num[i][j]);
					printf("\n\n");
			}
			continue;
		}
		if(m==0)
		{
			if(y>n)	
			{
				printf("your dice = %d\n",y);
				continue;
			}
			if(y<n)
			{
				n-=y;
				strcpy(ch1,num[m][n]);
				strcpy(num[m][n],ch);
				system("cls");
				printf("**********************************%d\n",y);
				for(i=0;i<10;i++)
				{
					for(j=0;j<10;j++)
						printf("%s\t",num[i][j]);
					printf("\n\n");
				}
				continue;
			}
			if(y==n)
			{
				system("cls");
				strcpy(ch1,num[0][0]);
				strcpy(num[0][0],ch);
				printf("your dice = %d\n",y);
				printf("u win\n");
				for(i=0;i<10;i++)
				{
					for(j=0;j<10;j++)
						printf("%s\t",num[i][j]);
					printf("\n\n");
				}
				break;
			}
			
			continue;
		}
	}
}
void mult()
{
	int a, b, x;
	for(;;)
	{
		a=rand()%20+1;
		b=rand()%20+1;
		printf("%d*%d = ",a,b);
		scanf("%d",&x);
		if(x == a*b)
			printf("true answer\n\n");
		else
			printf("wrong answer\n\n");	
	}
}
void pow()
{
	int a, f = 0, t = 0, x;
	for(;;)
	{
		a=rand()%16+5;
		printf("pow 2 of %2d is = ",a);
		scanf("%d",&x);
		if(x == a*a)
		{
			printf("true answer\n\n");
			t++;
		}
		else
		{
			printf("wrong answer\n\n");	
			f++;
		}
		if(t == 5)
		{
			printf("you win");
			break;
		}
		if(f == 5)
		{
			printf("you lose");
			break;
		}
	}
	printf("\nyour true answers = %d\nyour false answers = %d",t,f);
}
void guess()
{
	int x, a ,m=10;
	printf("Enter the number:");
	scanf("%d",&x);
	system("cls");
	for(;;)
	{
		scanf("%d",&a);
		if(a == x) break;
		m--;
		if(m == 0)
		{
			printf("game over");
			break;
		}
		if(a>x)
			printf("go down (%d)\n",m);
		if(a<x)
			printf("go up   (%d)\n",m);	
	}
	if( m!=0 )
	printf("\ntrue answer");
}
void guessw()
{
	getchar();
	printf("Enter your word : ");
	char s[max] , ch;
	int i,count;
	gets(s);
	system("cls");
	count=strlen(s);
	char a[count+1];
	for(i=0;i<count;i++)
	 	a[i]='-';
	for(;;)
	{
		printf("\nwhat is your guess:");
		ch=getchar();
		for(i=0;i<count;i++)
		{
	
			if(s[i]==ch)
				a[i]=s[i];
		}
		for(i=0;i<count;i++)
			printf("%c",a[i]);
			getchar();
			if(!(strcmp(s,a)))
				break;		
	}
	for(;;)
		printf(" *");
}
void chose()
{
	system("cls");
	
	char sta[3][3];
	int i, j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			sta[i][j]='*';
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%c\t",sta[i][j]);
		printf("\n");
	}
	for(;;)
	{
		printf("player 1:");
		scanf("%d %d",&i,&j);
		sta[i-1][j-1]='O';
		system("cls");
		for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
			printf("%c\t",sta[i][j]);
		printf("\n");
		}
		if(sta[0][0]=='O'&&sta[0][1]=='O'&&sta[0][2]=='O')
			break;
		if(sta[1][0]=='O'&&sta[1][1]=='O'&&sta[1][2]=='O')
			break;
		if(sta[2][0]=='O'&&sta[2][1]=='O'&&sta[2][2]=='O')
			break;
		if(sta[0][0]=='O'&&sta[1][0]=='O'&&sta[2][0]=='O')
			break;
		if(sta[0][1]=='O'&&sta[1][1]=='O'&&sta[2][1]=='O')
			break;
		if(sta[0][2]=='O'&&sta[1][2]=='O'&&sta[2][2]=='O')
			break;
		if(sta[0][0]=='O'&&sta[1][1]=='O'&&sta[2][2]=='O')
			break;
		if(sta[2][0]=='O'&&sta[1][1]=='O'&&sta[0][2]=='O')
			break;
		printf("player 2:");
		scanf("%d %d",&i,&j);
		sta[i-1][j-1]='X';
		system("cls");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				printf("%c\t",sta[i][j]);
		printf("\n");
		}
		if(sta[0][0]=='X'&&sta[0][1]=='X'&&sta[0][2]=='X')
			break;
		if(sta[1][0]=='X'&&sta[1][1]=='X'&&sta[1][2]=='X')
			break;
		if(sta[2][0]=='X'&&sta[2][1]=='X'&&sta[2][2]=='X')
			break;
		if(sta[0][0]=='X'&&sta[1][0]=='X'&&sta[2][0]=='X')
			break;
		if(sta[0][1]=='X'&&sta[1][1]=='X'&&sta[2][1]=='X')
			break;
		if(sta[0][2]=='X'&&sta[1][2]=='X'&&sta[2][2]=='X')
			break;
		if(sta[0][0]=='X'&&sta[1][1]=='X'&&sta[2][2]=='X')
			break;
		if(sta[2][0]=='X'&&sta[1][1]=='X'&&sta[0][2]=='X')
			break;		
	}
	printf("chooooosssssssseeeeeeeeeeeeeee");
}
