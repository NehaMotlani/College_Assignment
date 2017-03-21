#include<stdio.h>
int main()
{ 
	int c,i,j;
	long double q,p,n,d,tempp;
	scanf("%d",&c);
	for(j=0;j<c;j++)
	{
		scanf("%llf%llf",&p,&q);
		n=p;
		d=q;  
		int no; 
		scanf("%d",&no);
		int arr[no+1];
		for(i=0;i<no;i++)
		{
			scanf("%d",&arr[i]);
		}
		for(i=0;i<no;i++)
		{
			n=n-arr[i]*d;
			d=d;
			tempp=n;
			n=d;
			d=tempp;
			//   printf("num=%lld den=%lld\n",numerator,denominator);
		}  
		if(d==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
