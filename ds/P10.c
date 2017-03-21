#include <stdio.h>

int a[100000],b[100000],c[100000];

int enterarr(int p[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
		sum+=p[i];
	}
	return sum;
}

int max(int a,int b)
{
	int m;
	if(a>=b)
		m=a;
	else
		m=b;
	return m;
}
int main()
{
	int t;
	scanf("%d",&t);
	int suma=0;
	int sumb=0;
	int sumc=0;
	int n;
	while(t--)
	{
		scanf("%d",&n);
		int i=n;
		suma=enterarr(a,n);

		scanf("%d",&n);
		int j=n;
		sumb=enterarr(b,n);
			
		scanf("%d",&n);
		int k=n;
		sumc=enterarr(c,n);
		int m;
		//printf("%d %d %d\n",suma,sumb,sumc);
		while(suma!=sumb  || suma!=sumc || sumb!=sumc)
		{
		m=max(suma,max(sumb,sumc));
			if(m==suma)
			{	
				suma-=a[i-1];
				i--;
			}
			else if(m==sumb)
			{						
				sumb-=b[j-1];
				j--;
			}
			else if(m==sumc)
			{	
				sumc-=c[k-1];
				k--;
			}
			//printf("%d %d %d\n",suma,sumb,sumc);
		}
		printf("%d\n",suma);
	}
	return 0;
}