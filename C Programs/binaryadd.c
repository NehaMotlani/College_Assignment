#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	int k;
	char a[1001],b[1001];
	for(k=0;k<t;k++)
	{
		scanf("%s %s",a,b);
		int al=strlen(a);
		int bl=strlen(b);
		int i;
		if(al>bl)
			for(i=bl;i<=al;i++)
			{
				b[i+al-bl]=b[i];
				b[i]='0';
			}
		if(bl>al)
			for(i=al;i<=bl;i++)
			{
				a[i+bl-al]=a[i];
				a[i]='0';
			}
		int arr[100
		for(i=0;i<al;i++)
		int sum[1002],carry=0;
		for(i=0;i<1002;i++)
			sum[i]=0;
		for(i=0;i>al;i++)
		{
			sum[i]=
		if(carry==1)
			sum[al+1]=1;
		for(i=1001;i>=0;i--)
			if(sum[i]==1)
				break;
		int j=0;
		for(j=0;j<=i;j++)
			printf("%d",a[j]);
	}
	return 0;
}	
