#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++)
	{
		int n;
		scanf("%d",&n);
		int a[n+1];
		int j;
		for(j=0;j<n;j++)
			scanf("%d",&a[j]);
		int sumf=0;
		for(j=1;j<n;j++)
			sumf+=a[j];
		int suml=0;
		for(j=1;j<=n-1;j++)
		{
			suml+=a[j-1];
			sumf-=a[j];
			if(suml==sumf)
			{
				printf("YES\n");
				break;
			}
		}
		if(suml!=sumf)
			printf("NO\n");
	}
	return 0;
}



