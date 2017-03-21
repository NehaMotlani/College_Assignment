#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int i,n,ans;
	long long int fact=1;
	for(i=0;i<t;i++)
	{
		fact=1;
		scanf("%d",&n);
		while(n>=1)
		{
			fact*=n;
			n--;
		}
		ans=fact%1000000007;
		printf("%d\n",ans);

	}
	return 0;
}
		
