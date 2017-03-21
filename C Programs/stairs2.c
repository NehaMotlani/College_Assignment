#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int i;
	int n;
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		if(n%3==1)
			printf("1\n");
		if(n%3==0 ||n%3==2)
			printf("2\n");
	}
	return 0;
}

