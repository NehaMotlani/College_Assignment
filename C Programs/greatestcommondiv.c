#include<stdio.h>
int gcd(int a,int b)
{
	int r;
	if(a>=b)
	{
		r=a%b;
		a=b;
		b=r;
		if(r==0)return a;
		return gcd(a,b);
		
	}
	else
	{
		r=b%a;
		b=a;
		a=r;
		if(r==0)return b;
		return gcd(a,b);
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	int i,a,b;
	int ans;
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&a,&b);
		ans=gcd(a,b);
		printf("%d\n",ans);
	}
	return 0;
}		
