#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++)
	{
		int n,m;
		scanf("%d %d",&n,&m);
		n>>=m-1;
		if(n%2==1)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
