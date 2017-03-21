#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int no;
	scanf("%d",&no);
	int a[1000000]={0};
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int k=0;
	int sum=0;
	int j;
	for(j=0;j<n;j++)
	{
		i=j;
		sum=0;
		while(sum<=no && i<=n)
		{
			if(sum==no)k++;
			sum+=a[i];
			i++;
		}
	}
	printf("%d\n",k);
	return 0;
}


