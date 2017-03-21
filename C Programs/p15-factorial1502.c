#include <stdio.h>
int main()
{
	int no,digi[500],i,sum,l=1,j;

	scanf("%d",&no);
	digi[0]=1;
	for(i=2;i<=no;++i)
	{
		sum=0;
		for(j=0;j<l;)
		{
			sum+=digi[j]*i;
			digi[j]=sum%10;
			sum=sum/10;
			++j;
		}
		while(sum>0)
		{
			digi[l]=sum%10;
			l++;
			sum=sum/10;

		}

	}

	for(j=l-1;j>=0;--j)
	{
		printf("%d",digi[j]);
	}
	printf("\n");

	return 0;
}
