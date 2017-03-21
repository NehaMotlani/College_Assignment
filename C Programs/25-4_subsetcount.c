#include <stdio.h>

long long int ans=0;

void solve(int arr[],int i,int sum,int size)
{
	if(i==size)
		return;
	solve(arr,i+1,sum,size);
	sum=(sum+arr[i])%3;
	if(sum==0)
		ans++;
	solve(arr,i+1,sum,size);
}

int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int n;
		scanf("%d",&n);
		int z[n];
		int i;
		for (i= 0; i < n; ++i)
		{
			scanf("%d",&z[i]);
		}
		ans=0;
		solve(z,0,0,n);
		printf("%lld\n",ans);
	}
}
