#include <stdio.h>
#include <limits.h>

void display(long long int z[],int n )
{
	int i;
	for(i=0;i<n;i++)
		printf("%lld ",z[i]);
	printf("\n");
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		long long int f[n],r[n],s[n];
		int i;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&f[i]);
		}
		for(i=0;i<n;i++)
		{
			r[i]=f[n-1-i];
		}
		long long int max=INT_MIN;
		s[0]=f[0];
		int ps=0,parr=1;
		long long int temp;
		while(parr<n)
		{
			while(f[parr]<s[ps] && ps>=0)
			{
				
				temp=((f[parr]|s[ps])*(f[parr]|s[ps])-((f[parr]&s[ps])*(f[parr]&s[ps])));
				if(temp>max)
					max=temp;
				ps--;
				display(s,ps);
			}
				s[ps]=f[parr];
			display(s,ps);
				ps++;
			parr++;
			
		}
		s[0]=r[0];
		parr=1;
		ps=0;
		while(parr<n)
		{
			while(r[parr]<s[ps] && ps>=0)
			{
				
				temp=((r[parr]|s[ps])*(r[parr]|s[ps])-((r[parr]&s[ps])*(r[parr]&s[ps])));
				if(temp>max)
					max=temp;
				ps--;
				display(s,ps);
			}
			
				s[ps]=r[parr];
				display(s,ps);
				ps++;
				//display(s,ps);
			parr++;
		}
		printf("%lld\n",max);
	}
	return 0;
}