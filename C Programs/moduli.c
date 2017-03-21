#include<stdio.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	int n,m;
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&n,&m);
		if(n%m!=0)
			printf("%d\n",(n/m)*m+m);
		else
			printf("%d\n",n);

	}
	return 0;
}
