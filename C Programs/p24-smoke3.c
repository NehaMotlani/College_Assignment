#include<stdio.h>
#include<string.h>
#define maxi 1000000000
int main()
{
	int arr[105],mixcol[105][105],dp[105][105];
	int value,i,n,j,k,mini,lim;
	int t;
	scanf("%d",&t);
	int z;
	for(z=0;z<t;z++)
	{
	scanf("%d",&n);{
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);	
		}
		for(i = 0;i < n;i++)
		{

			mixcol[i][i] = arr[i];
		}

		for(i = 0;i < n;i++){
			for(j = i+1;j <= n;++j){
				mixcol[i][j] = mixcol[i][j-1] + arr[j];
				if(mixcol[i][j] >= 100) 
					mixcol[i][j] = mixcol[i][j]%100;
			}
		}
		for (i = 0; i < n; i++)
		{
			dp[i][i] = 0;
		}
		for(lim=1;lim<n;lim++)
		{

			for (i=0;i<n-lim; i++)
			{
				j=i+lim;
				dp[i][j] = maxi;
				for (k=i; k<=j; k++)
				{
					mini = dp[i][k] + dp[k+1][j] + (mixcol[i][k]*mixcol[k+1][j]);
					if (mini < dp[i][j])
						dp[i][j] = mini;
				}
			}
		}

		printf("%d\n",dp[0][n-1]);
	}
	}
	return 0;
}


