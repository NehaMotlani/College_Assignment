#include<stdio.h>

int search(int x[],int n,int y[]);

int main()
{
	int c,p,q,i,j,k,arr[1001],mrr[1001],ans;
	float r[1001];
	scanf("%d",&c);
	for(j=0;j<c;j++)
	{
		scanf("%d%d",&p,&q);
		for(i=0;i<p;i++)
		{
			scanf("%f%d",&r[i],&arr[i]);
			mrr[i]=1;
		}
		ans = search(arr,p,mrr);
		printf("%d\n",ans);
	}
	return 0;
}
int search(int x[],int p,int y[])
{
	int i,j,cc=0,k,M=1;//M=max
	for(j=1;j<p;j++)
	{
		for(i=0;i<j;i++)
		{
			if((x[i]<=x[j]) && (y[j] < y[i]+1))
			{
				y[j]=y[i]+1;
				if(M < y[j])
					M = y[j];
			}
		}
	}
	//printf("%d\n",max);
	return p-M;
}

