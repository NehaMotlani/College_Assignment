#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int a=0,b=1;
	int i;
	long long int c=0;
	if(t==1)
		printf("1\n");
	if(t==2)
		printf("1\n");
	if(t>2)
	{
		for(i=1;i<t;i++)
		{	
			c=(b%1000000007+a%1000000007)%1000000007;
			a=b;
			b=c;
		}
	printf("%lld\n",c);
	}
	return 0;
}

