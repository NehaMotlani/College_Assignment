#include<stdio.h>
int main()
{
	unsigned long long int t;
	scanf("%lld",&t);
	unsigned long long int i;
	for(i=0;i<t;i++)
	{
	unsigned long long int n;
	scanf("%lld",&n);
	unsigned long long int number=(n*(3*n+1))/2;
	unsigned long long int ans=number%1000007;
	printf("%lld\n",ans);
	}
	return 0;
}
