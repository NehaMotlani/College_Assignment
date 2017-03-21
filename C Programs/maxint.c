#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int i,k,maxint=0;
	for(i=0;i<t;i++)
	{
		scanf("%d",&k);
		if(k%2==0)
			if(k>=maxint)
				maxint=k;
	}
	printf("%d",maxint);
	return 0;
}
