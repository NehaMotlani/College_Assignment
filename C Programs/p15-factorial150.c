#include <stdio.h>

int main()
{
	int num,f[500],i,temp,m=1,k;

	scanf("%d",&num);
	f[0]=1;
	for(i=2;i<=num;++i)
	{
		temp=0;
		for(k=0;k<m;)
		{
			temp+=f[k]*i;
			f[k]=temp%10;
			temp=temp/10;
			++k;
		}
		while(temp>0)
		{
			f[m]=temp%10;
			m++;
			temp=temp/10;

		}

	}

	for(k=m-1;k>=0;--k)
	{
		printf("%d",f[k]);
	}
	printf("\n");

	return 0;
}
