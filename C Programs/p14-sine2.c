#include<stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int num, z,t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		float acu, tn, d, x, sin_t, sin_m;
		scanf("%f %f", &x,&acu);
		z = x;
		x = x * (3.142 / 180.0);
		sin_m = sin(x);
		tn = x;
		sin_t = tn;
		num = 1;
		do
		{
			d = 2 * num * (2 * num + 1);
			tn = -tn * x * x / d;
			sin_t = sin_t + tn;
			num = num + 1;
		} while (acu <= fabs(sin_m - sin_t));
		printf("%f\n", sin_t);
	}
	return 0;
}
