#include<stdio.h>
int main()
{
	long long int n;
	long long int l=0;
	while(1)
	{
		scanf("%lld",&n);

		if (n==-1)
			break;
		l+=n;
		printf("%lld\n",l%10000007);
	}
	return 0;
}
