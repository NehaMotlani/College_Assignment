#include<stdio.h>
int parity(int a,int b)
{
	if(a==0,b==0)return 1;
	if(a!=0,b==0)return 0;
	if(a==0,b!=0)return 0;
	return (b*parity(a-1,b)+parity(a-1,b-1));
}
int main()
{
	int t;
	int i;
	int x,y;
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&x,&y);
		int ans=parity(x,y);
		printf("%d",ans);
	}
	return 0;
}
