#include <stdio.h>

void mer(long long int a[],long long int l,long long int m,long long int r)
{
	long long int n1=m-l+1;
	long long int n2=r-m;
	long long int l1[n1],l2[n2];
	long long int i;
	for(i=0;i<n1;i++)
		l1[i]=a[l+i];
	for(i=0;i<n2;i++)
		l2[i]=a[m+1+i];
	long long int j=0,k=l;
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

void mergesort(long long int a[],long long int l,long long int r)
{
	if(l<r)
	{
		long long int mid=(l+r)/2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,r);

		mer(a,l,mid,r);
	}
}

void Mer(long long int a[],long long int l,long long int m,long long int r,long long int b[])
{
	long long int n1=m-l+1;
	long long int n2=r-m;
	long long int l1[n1],l2[n2],L1[n1],L2[n2];
	long long int i;
	for(i=0;i<n1;i++)
	{
		l1[i]=a[l+i];
		L1[i]=b[l+i];
	}
	for(i=0;i<n2;i++)
	{
		l2[i]=a[m+1+i];
		L2[i]=b[m+1+i];
	}
	long long int j=0,k=l;
	i=0;
	while(i<n1 && j<n2)
	{
		if(l1[i]>=l2[j])
			{
				a[k]=l2[j];
				b[k]=L2[j];
				j++;
			}
		else
		{
			a[k]=l1[i];
			b[k]=L1[i];
			i++;
		}
		k++;
	}
	while(i<n1)
	{
		a[k]=l1[i];
		b[k]=L1[i];
		k++;
		i++;
	}
	while(j<n2)
	{
		a[k]=l2[j];
		b[k]=L2[j];
		k++;
		j++;
	}
}

void Mergesort(long long int a[],long long int l,long long int r,long long int b[])
{
	if(l<r)
	{
		long long int mid=(l+r)/2;
		Mergesort(a,l,mid,b);
		Mergesort(a,mid+1,r,b);

		Mer(a,l,mid,r,b);
	}
}


void display(long long int a[],long long int n)
{
	long long int i;
	for(i=0;i<n;i++)
		printf("%lld ",a[i]);
	printf("\n");
}


int main()
{
	long long int n;
	scanf("%lld",&n);
	long long int b[1001],a[1001];
	long long int i;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&b[i]);
		a[i]=i+1;
	}
	//display(a,n);
	//display(b,n);
	Mergesort(b,0,n-1,a);
	//printf("\n");
	//display(a,n);
	//display(b,n);
	long long int j;
	for(i=0;i<n;i++)
	{
		mergesort(a,0,i);
		for(j=0;j<=i;j++)
		{
			printf("%lld",a[j]);
			if(j!=i)
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}