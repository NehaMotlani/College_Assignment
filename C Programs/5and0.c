#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int i;
		int n;
		int j,a[1000]={1};
		int sum0,sum5;
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		for(j=0;j<n;j++)
			scanf("%d",&a[j]);
		sum0=0,sum5=0;
		for(j=0;j<n;j++)
		{
			if(a[j]==0)
				sum0++;
			else if(a[j]==5)
				sum5++;
		}
		if((sum0==0) || (sum5< 9))
			printf("0\n"); 
		else
		{
			int l=sum5/9;
			int k=l*9;
				for(j=0;j<k;j++)
					printf("5");
				for(j=0;j<sum0;j++)
					printf("0");
				printf("\n");
		
		}
	}
	return 0;
}

