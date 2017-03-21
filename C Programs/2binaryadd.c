#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int i,j=0;
	for(i=0;i<t;i++)
	{
		char a[10000],b[10000];
		scanf("%s",a);
		scanf("%s",b);
		int an,bn;
		int arr[10000],brr[10000];
		for(an=0;a[an]!='\0';an++);
		for(bn=0;b[bn]!='\0';bn++);
		for(j=0;j<an;j++)
			arr[j]=a[an-1-j]-48;
		for(j=0;j<bn;j++)
			brr[j]=b[bn-1-j]-48;
		if(an>bn)
		{
			for(j=bn;j<an;j++)
				brr[j]=0;
			bn=an;
		}
		if(bn>an)
		{
			for(j=an;j<bn;j++)
				arr[j]=0;
			an=bn;
		}
		int sum[10000];
		int carry=0;
		int k;
		for(k=0;k<an;k++)
		{
			sum[k]=arr[k]+brr[k]+carry;
			if(sum[k]>1)
				carry=1;
			else
				carry=0;
			sum[k]%=2;
		}
		if(carry==1)
			printf("1");
		for(j=an-1;j>=0;j--)
			if(sum[j]==1 || carry==1)
				break;
		if(j==-1)printf("0");
		int l;
		for(l=j;l>=0;l--)
			printf("%d",sum[l]);
		printf("\n");
		
	}
	return 0;
}



