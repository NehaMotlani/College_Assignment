#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int i,j,l;
	for(i=0;i<t;i++)
	{	
		
		int n;
		scanf("%d",&n);
		int b;
		int min=1<<31-1;
		for(j=0;j<n;j++)
		{
			scanf("%d",&b);
			if(b<min)
			{
				min=b;
				l=j;
			}
		}
		printf("%d\n",l);
	}
	return 0;
}

