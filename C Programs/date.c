#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int d,m,y;
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&d,&m,&y);
		if(m>=1&&m<=12)
		{
			if(m>=1&&m<=7)
			{	
				if(m!=2&&m%2==1)
				{
					if(d>=1&&d<=31)
						printf("yes\n");
					else
						printf("no\n");
				}
				if(m!=2&&m%2==0)
				{
					if(d>=1&&d<=30)
						printf("yes\n");
					else
						printf("no\n");
				}
			}
			if(m>=8&&m<=12)
			{	
				if(m!=2&&m%2==0)
				{
					if(d>=1&&d<=31)
						printf("yes\n");
					else
						printf("no\n");
				}
				if(m!=2&&m%2==1)
				{
					if(d>=1&&d<=30)
						printf("yes\n");
					else
						printf("no\n");
				}
			}
			if(y%100==0)
			if(y%4!=0||y%400!=0&&m==2)
			{
				if(d>=1&&d<=28)
					printf("yes\n");
				else
					printf("no\n");
			}
			if(y%4==0&&m%400==0&&m==2)
			{
				if(d>=1&&d<=29)
					printf("yes\n");
				else
					printf("no\n");
			}
			else
			if(y%4!=0&&m==2)
			{
				if(d>=1&&d<=28)
					printf("yes\n");
				else
					printf("no\n");
			}
			if(y%4==0&m==2)
			{
				if(d>=1&&d<=29)
					printf("yes\n");
				else
					printf("no\n");
			}
			if(m==7||m==8)
			{
				if(d>=1&&d<=31)
					printf("yes\n");
			}
		}
		else
			printf("no\n");
	}	
	return 0;
}
