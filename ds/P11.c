#include <stdio.h>

void swap(long long int *p,long long int *q)
{
	long long int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}

void heapify_double(long long int a[],long long int b[],int i,int n)
{
	int largest=i;
	int l=2*i+1;
	int r=2*i+2;

	if(l<n && a[largest]<a[l] )
		largest=l;
	if( r<n && a[largest]<a[r] )
		largest=r;
	if(largest!=i)
	{
		swap(&a[largest],&a[i]);
		swap(&b[largest],&b[i]);
		heapify_double(a,b,largest,n);
	}
}

void heapsort(long long int a[],long long int b[],int n)
{
	int i=0;
	for(i=n/2-1;i>=0;i--)
	{
		heapify_double(a,b,i,n);
	}
	for(i=n-1;i>=0;i--)
	{
		swap(&a[0],&a[i]);
		swap(&b[0],&b[i]);
		heapify_double(a,b,0,i);
	}
}

void display(long long int z[],int n )
{
	int i;
	for(i=0;i<n;i++)
		printf("%lld ",z[i]);
	printf("\n");
}

void heapify(long long int a[],int n,int i)
{
	int largest=i;
	int l=2*i+1;
	int r=2*i+2;

	if(l<n && a[l]>a[largest])
		largest=l;
	if(r<n && a[r]>a[largest])
		largest=r;
	if(largest!=i)
	{
		swap( &a[i],&a[largest]);
		heapify(a,n,largest);
	}
}


int main()
{
	int n;
	scanf("%d",&n);
	long long int p[n],q[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&p[i]);
		scanf("%lld",&q[i]);
	}
	heapsort(p,q,n);
	long long int z[n];
	for(i=0;i<n;i++)
	{
		z[i]=q[i]-p[i];
	}
	heapify(z,n,n/2-1);
	for(i=n/2-1;i>=0;i--)
	{
		heapify(z,n,i);
	}
	// display(p,n);
	// display(q,n);
	//display(z,n);
	printf("%lld\n",z[0]);
	return 0;
}