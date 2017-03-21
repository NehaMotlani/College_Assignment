#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[1000000];
	int k,ans=0;
	scanf("%d",&k);
	int i,j,l;
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			for(l=j+1;l<n;l++)
			{
				if(arr[i]+arr[j]+arr[l]==k)
					ans++;
			}
	printf("%d",ans);
	return 0;
}
