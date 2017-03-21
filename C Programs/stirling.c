#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int i=0;
	for(i=0;i<t;i++)
	{
	int n,m;
	scanf("%d %d",&n,&m);
	int ans=((n-m)&((m-1)/2));
	if(ans==0)
		printf("1\n");
	else
		printf("0\n");
	}
	return 0;
}
