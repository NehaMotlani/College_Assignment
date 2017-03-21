#include<stdio.h>
int count=0;
void powerset(int n,long long int s[n],int a[n]);

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int n;
	scanf("%d",&n);
	long long int s[20];
	int i;
	for(i=0;i<n;i++)
		scanf("%lld",&s[i]);
	int a[n];
	powerset(n,s,a);
	printf("%d\n",(count-1));
	}
	return 0;
}

void powerset(int n,long long int s[n],int a[n])
{
	int i;int m;
	int z=1<<n;
	for(i=0;i<z;i++)
	{
		m=i;
		int j=0;
		long long int sum=0;
		for(j=0;j<n;j++)
		{
			a[j]=i%2;
			i=i/2;
			if(a[j]==1)
				sum+=s[j];
		}
		if(sum%3==0)count++;
		i=m;
	}

}
