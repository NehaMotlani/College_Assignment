#include<stdio.h>
long long int fact=1;
int main()
{
	int n;
	fact=1;
	scanf("%d",&n);
	while(n>=1)
		{
			fact*=n;
			n--;
		}
		printf("%lld\n",fact);
	return 0;
}
		
