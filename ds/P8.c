#include <stdio.h>
#include <limits.h>

int min(int p[],int n)
{
	int m=INT_MAX;
	int i;
	for(i=0;i<n;i++)
	{
		if(m>p[i] && p[i]>0)
			m=p[i];
	}
	return m;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int q;
		scanf("%d",&q);
		int a[q];
		int i=0;
		long long int sum=0;
		int x,y;
		int m=INT_MAX;
		while(q--)
		{
			scanf("%d",&x);
			if(x==1)
			{
				scanf("%d",&y);
				sum += y;
				a[i] = y;
				if(m>y)
					m=y;
				i++;
				printf("%d %lld\n",m,sum);
				//printf("a %d\n",i);
			}
			else if(x==2)
			{
				int temp=a[i-1];
				if(m==temp)
				{
					m=min(a,i-1);
				}
				sum-=a[i-1];
				a[i-1]=-1;
				if(i!=0)
				i--;
				if(i<=0)
				{
					printf("-1 0\n");
					//printf("a %d\n",i);
				}
				else
				{
					printf("%d %lld\n",m,sum);
					//printf("a %d\n",i);
				}	
			}
		}
	}
	return 0;
}