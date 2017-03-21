#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int i,j,k;
	for(i=0;i<t;i++)
	{
		int n;
		scanf("%d",&n);
		int a[1000];
		for(j=0;j<n;j++)
			scanf("%d",&a[j]);
		int l[1000];
		for(j=0;j<1000;j++)
			l[j]=0;
		for(j=0;j<n;j++)
		{
			for(k=j+1;k<n;k++)
				if(a[j]==a[k])
					l[j]++;
		}
		int lar=l[0];
		for(j=0;j<n;j++)
		{
			if(l[j]>lar)
				lar=l[j];
		}
		printf("%d\n",lar+1);
	}
	return 0;
}
