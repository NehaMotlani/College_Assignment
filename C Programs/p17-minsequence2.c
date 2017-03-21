#include<stdio.h>

int gcd(int x,int y)
{
	if(y==0)return x;
	else return gcd(y,x%y);
}

int main()
{
	int t;
	scanf("%d",&t);
	int j,a;
	int b[1000008];
	for(j=0;j<t;j++)
		scanf("%d",&b[j]);
	printf("%d ",b[0]);
	for(j=0;j<t-1;j++)
	{
		a=((b[j]*b[j+1])/gcd(b[j],b[j+1]));
		printf("%d ",a);
	}
	printf("%d",b[t-1]);
	printf("\n");
	return 0;
}
