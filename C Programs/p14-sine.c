#include<stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int n, x1,t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		float accuracy, term, denominator, x, sin_taylor, sin_math;
		scanf("%f %f", &x,&accuracy);
		x1 = x;
		x = x * (3.142 / 180.0);
		sin_math = sin(x);
		// scanf("%lf",&accuracy);
		term = x;
		sin_taylor = term;
		n = 1;
		do
		{
			denominator = 2 * n * (2 * n + 1);
			term = -term * x * x / denominator;
			sin_taylor = sin_taylor + term;
			n = n + 1;
		} while (accuracy <= fabs(sin_math - sin_taylor));
		printf("%f\n", sin_taylor);
	}
	return 0;
}
