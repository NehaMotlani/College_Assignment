#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int j;
	for(j=0;j<t;j++)
	{
		int n;
		scanf("%d",&n);
		int a[10004];
		a[0]=1;
		a[1]=1;
		int i;
		for(i=2;i<10004;i++)
		{
			a[i]=a[i-1]+a[i-2];
			a[i]=a[i]%n;
		}
		for(i=1;i<10004;i++)
		if(a[i]==1 && a[i-1]==0)break;
		int period=i;
		if(period<=10000)
		printf("%d\n",period);
		else
			printf("-1\n");
	}
	return 0;
}


