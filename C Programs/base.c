#include<stdio.h>
int main()
{
	int n,a,b,i,j;
	long long int x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{ 
		x=1;
		{
			scanf("%d%d",&a,&b);
			for(j=0;j<b;j++)
				x=x*a;
		}
		long long int l=x%1000000007;
		printf("%lld",l);
		printf("\n");
	}
	return 0;
}
