#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++)
	{
		int nl;
		scanf("%d",&nl);
		int k;
		for(k=0;k<nl;k++)
		{
			int m;
			scanf("%d",&m);
			int f=255-m;
			char chr=(char)f;
			printf("%c",chr);
		}
		printf("\n");
	}
	return 0;
}
