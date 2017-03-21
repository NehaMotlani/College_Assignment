#include<stdio.h>
int main()
{
	int N,m;
	scanf("%d %d",&N,&m);
	int a[99998];
	int k;
	for(k=0;k<N;k++)
		scanf("%d",&a[k]);
	int i,j,z,l;
	for(z=0;z<m;z++)
	{
		l=1<<31-1;
		scanf("%d %d",&i,&j);
		for(k=i;k<=j;k++)
		{
			if(a[k]<l)
				l=a[k];
		}
		printf("%d\n",l);
	}
	return 0;
}
