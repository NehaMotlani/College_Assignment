#include<stdio.h>
int main()
{
	int z;
	scanf("%d",&z);
	int i;
	int n,m,a;
	for(i=0;i<z;i++)
	{
	scanf("%d %d %d",&n,&m,&a);
	int l=n/a;
	int k=m/a;
	if(n%a!=0)
		l++;
	if(m%a!=0)
		k++;
	printf("%lld\n",(long long)l*(long long)k);
	}
	return 0;
}
