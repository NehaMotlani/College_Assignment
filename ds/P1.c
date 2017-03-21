#include <stdio.h>

void mer(int a[],int l,int m,int r)
{
	int n1=m-l+1;
	int n2=r-m;
	int l1[n1],l2[n2];
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

void mergesort(int a[],int l,int r)
{
	if(l<r)
	{
		int mid=(l+r)/2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,r);

		mer(a,l,mid,r);
	}
}


void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}

void search(int a[],int l,int h,int q,int n)
{
	if(q<a[0])
	{
		printf("%d\n",n);
		return ;
	}
	if(q>=a[n-1])
	{
		printf("0\n");
		return ;
	}
	int mid;
	while((h-l)>1)
	{
		mid=(l+h)/2;
		if(a[mid]<=q)
			l=mid;
		else
			h=mid-1;
	}
	if(a[h]>q)
		printf("%d\n",n-h);
	else
		printf("%d\n",n-h-1);
}

int main()
{
	int n;
	scanf("%d",&n);
	int l[n];
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&l[i]);
	int m;
	scanf("%d",&m);
	int q;
	mergesort(l,0,n-1);
	while(m)
	{
		scanf("%d",&q);
		search(l,0,n-1,q,n);
		m--;
	}
	return 0;
}