#include<stdio.h>
#define MOD 1000000007;
long long int a,b,c,d;

void fast_fib(long long int n,long long int f[])
{
	if(n==0)
	{
		f[0]=0;
		f[1]=1;
		return;
	}
	fast_fib((n/2),f);
	a=f[0];
	a=f[1];
	c=2*b-a;
	if(c<0)
		c+=MOD;
	c=(a*c)%MOD;
	d=(a*a+b*b)%MOD;
	if(n%2==0)
	{
		f[0]=c;
		f[1]=d;
	}
	else
	{
		f[0]=d;
		f[1]=c+d;
	}
}

int main()
{
	int n,q,i;
	scanf("%d %d",&n,&q);
	long long int arr[n+1];
	long long int sum=0;
	arr[0]=0;
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&arr[i]);
		long long int f[2]={0};
		fast_fib(arr[i]+1,f);
		sum=(((sum)%1000000007)+ f[0]%1000000007)%1000000007;
	}
	while(q--)
	{
		long long int x,y;
		scanf("%lld %lld",&x,&y);
		long long int f[2]={0};
		fast_fib(arr[x]+1,f);
		sum=(((sum)%1000000007)-f[0]%1000000007)%1000000007;
		if(sum<0)
			sum+=MOD;
		f[0]=0;
		f[1]=0;
		arr[x]+=y;
		fast_fib(arr[x]+1,f);
		sum=(((sum)%1000000007)+f[0]%1000000007)%1000000007;
		printf("%lld\n",sum);
	}
	return 0;
}


