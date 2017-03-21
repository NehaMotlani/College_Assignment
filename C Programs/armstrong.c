#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int i,k,z;
	int n,l;
	int p;
	int a[3];
	for(i=0;i<t;i++)
	{	
		scanf("%d",&n);
		p=n;
	l=0;
		for(k=0;k<3;k++)
		{	
			a[k]=n%10;
			n=n/10;
		}
	for(z=0;z<3;z++)
	{
		l=l+((a[z]*a[z])*a[z]);
	}
	if(l==p)
		printf("yes\n");
	else
		printf("no\n");
	}
	return 0;
}
