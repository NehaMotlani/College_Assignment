#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++)
	{
		int n,m,a,b;
		scanf("%d %d %d %d",&n,&m,&a,&b);
		if(m*a>b)
		{
		int cost1=((n/m)*b)+((n%m)*a);
		while(n%m!=0)n++;
		int cost2=(n/m)*b;
		if(cost1>=cost2)printf("%d\n",cost2);
		else printf("%d\n",cost1);
		}
		else
			printf("%d\n",n*a);
	}
	return 0;
}

