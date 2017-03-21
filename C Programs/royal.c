#include<stdio.h>
#define pi 3.141592653589793238462643383279
int main()
{
	int t;
	scanf("%d",&t);
	int i;
	double l;
	for(i=0;i<t;i++)
	{
		scanf("%lf",&l);
		double  area=(l*l)/(2*pi);
		printf("%.2lf\n",area);
	}
	return 0;
}

