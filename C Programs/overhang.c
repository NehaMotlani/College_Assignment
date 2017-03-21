#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++)
	{
		float n;
		int m=2;
		scanf("%f",&n);
		float sum=0;
		while(sum<n)
		{
			sum+=1.0/m;
			m++;
		}
		printf("%d\n",m-2);
	}
	return 0;
}
