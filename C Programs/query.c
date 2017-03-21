#include<stdio.h>
int main()
{
	int n,num[1000000];
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	int j,l;
	int new[1000000];
	for(i=0;i<1000000;i++)
		new[i]=0;
	for(i=0;i<n;i++)
	{
		l=num[i];
		new[l]=1;
	}
	i=0;
	for(j=0;j<1000000;j++)
		if(new[j]==1)
		{
			num[i]=j;
			i++;
		}
	int q;
	scanf("%d",&q);
	int quer;
	for(i=0;i<q;i++)
	{
	int low=0;
	int high=n;
	int mid=(high+low)/2;
		scanf("%d",&quer);
		while(low<=high)
		{
			if(quer<num[0])
			{
				printf("%d\n",num[0]);
				break;
			}
			else if(quer>num[n-1])
			{
				printf("0\n");
				break;
			}
			else if(quer==num[mid])
			{
				printf("%d\n",num[mid]);
				break;
			}
			else if(quer>num[mid])
			{
				low=mid+1;
				if(quer<num[mid+1] && quer>num[mid])
				{
					printf("%d\n",num[mid+1]);
					break;
				}
			}
			else if(quer<num[mid])
			{
				high=mid-1;
				if(quer>num[mid-1]&& quer<num[mid])
				{
					printf("%d\n",num[mid]);
					break;
				}
			}
			mid=(high+low)/2;
		}	
	}
	return 0;
}
