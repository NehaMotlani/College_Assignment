#include<stdio.h>
int main()
{
	int n,m,l;
	int j,a[20];
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		l=m;
		for(j=0;j<20;j++)
			a[j]=3;
		j=0;
		while(m)
		{
			a[j]=m%2;
			m=m/2;
			j++;
		}
		for(j=19;j>=0;j--)
		{
			if(a[j] !=3)
				printf("%d",a[j]);
		}
		if(l==0)
			printf("0");
		printf("\n");
	}
	return 0;
}

