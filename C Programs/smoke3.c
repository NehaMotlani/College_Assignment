#include<stdio.h>

int main()
{
	int c;
	scanf("%d",&c);

	while(c--)
	{
		int p;
		scanf("%d",&p);
		int j,i,k;
		int least;
		int color[101][101],smoke[101][101];

		for(j=0;j<p;j++)
		{
			scanf("%d",&smoke[1][j]);
			color[1][j]=0;
		}

		for(j=0;j<p-1;j++)
		{
			smoke[2][j]=(smoke[1][j]+smoke[1][j+1])%100;
			color[2][j]=smoke[1][j]*smoke[1][j+1];
		}

		for(j=3;j<=p;j++)
		{
			for(i=0;i<p-1;i++)
			{
				color[j][i]=99999999;
				for(k=1;k<i;k++)
				{
					least=(smoke[k][i]*smoke[j-k][i+k])+color[k][i]+color[j-k][i+k];
					if(least<color[j][i])
					{
						color[j][i]=least;
						smoke[j][i]=(smoke[k][i]+smoke[j-k][i+k])%100;
					}
				}//3rd loop
			}//2nd loop
		}//1st loop
		printf("%d\n",color[p][0]);
	}//running the loop t times
	return 0;
}//end of main

