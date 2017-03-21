#include <stdio.h>
#include <limits.h>

void mer(long long int a[],int l,int m,int r)
{
	int n1=m-l+1;
	int n2=r-m;
	long long int l1[n1],l2[n2];
	int i;
	for(i=0;i<n1;i++)
		l1[i]=a[l+i];
	for(i=0;i<n2;i++)
		l2[i]=a[m+1+i];
	int j=0,k=l;
	i=0;
	while(i<n1 && j<n2)
	{
		if(l1[i]>=l2[j])
			{
				a[k]=l2[j];
				j++;
			}
		else
		{
			a[k]=l1[i];
			i++;
		}
		k++;
	}
	while(i<n1)
		a[k++]=l1[i++];
	while(j<n2)
		a[k++]=l2[j++];
}

void mergesort(long long int a[],int l,int r)
{
	if(l<r)
	{
		int mid=(l+r)/2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,r);

		mer(a,l,mid,r);
	}
}


void display(long long int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%lld ",a[i]);
	printf("\n");
}

int main()
{
	char c;
	long long int n;
	long long int a[100000]={0};
	int i=0,z=i,m=0;
	while(1)
	{
		// mergesort(a,0,i);
		// while(a[m] != 0)
		// {
		// 	m++;
		// }
		// i = m;
		scanf("%c",&c);
		if(c == '#')
			break;
		else if(c =='+')
		{
			scanf("%lld",&n);
			a[i]=n;
			i++;
			//display(a,i);
			
			//display(a,i);
			z=i;
		}
		else if(c=='-')
		{
			mergesort(a,0,i-1);
			if(i==0)
			{
				printf("-1\n");
				continue ;
			}
			printf("%lld\n",a[i-1]);
			i--;
		}	
	}
	return 0;
}