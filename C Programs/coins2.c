#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int n,m;
	int arr[1000000]={0};
	scanf("%d %d",&n,&m);
	int i,j;
	for(i=0;i<=n;i++)
		for(j=0;j<=m;j++)
			arr[a*i+b*j]=1;
	for(i=0;i<1000000;i++)
		if(arr[i]==1)
			printf("%d ",i);
	printf("\n");
	return 0;
}
