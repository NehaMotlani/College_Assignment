#include<stdio.h>
int main()
{
	int m,count=0;
	scanf("%d",&m);
	int a[10000];
	int i,j,k;
	for(i=0;i<m;i++)
		a[i]=(i+1)*(i+1);
	for(i=0;i<m;i++)
	{
		j=1,k=i-1;
		while(j<k && j<i && k>=0)
		{
		if(a[j]+a[k]>a[i])
			k--;
		if(a[j]+a[k]<a[i])
			j++;
		if(a[j]+a[k]==a[i])
		{
			count++;
			j++;
		}
		}
	}
	printf("%d\n",count);
	return 0;
}
