#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int save=t;
	long long int h[100000]={0},a[100000]={0},b[100000]={0};
	int i=0;
	while(t--)
	{
		scanf("%lld",&h[i]);
		scanf("%lld",&a[i]);
		scanf("%lld",&b[i]);
		i++;
	}
	t=save;
	long long int paint=0;
	i=0;
	while(i<t)
	{
		if(b[i]>a[i+1])
		{
			if(h[i]<=h[i+1])
			{
				paint+=(((b[i]-a[i])*h[i])+((b[i+1]-a[i+1])*h[i+1])-((b[i]-a[i+1])*h[i]));
				paint%=1000000009;
			}
			else
			{
				paint+=(((b[i]-a[i])*h[i])+((b[i+1]-a[i+1])*h[i+1])-((b[i]-a[i+1])*h[i+1]));	
				paint%=1000000009;
			}
		}
		else
		{
			paint+=(((b[i]-a[i])*h[i])+((b[i+1]-a[i+1])*h[i+1]));
			paint%=1000000009;
		}
		i+=2;
	}
	int n=t;
	if(t%2==0)
	{
		if(b[n-2]>a[n-1])
		{
			if(h[n-1]<h[n-2])
			{
				paint+=(((b[n-1]-a[n-1])*h[n-1])-((b[n-2]-a[n-1])*h[n-1]));
				paint%=1000000009;
			}
			else
			{
				paint+=(((b[n-1]-a[n-1])*h[n-1])-((b[n-2]-a[n-1])*h[n-2]));	
				paint%=1000000009;
			}
		}
		else
		{
			paint+=((b[n-1]-a[n-1])*h[n-1]);
			paint%=1000000009;
		}	
		
	}
	printf("%lld\n",paint);
		return 0;
}