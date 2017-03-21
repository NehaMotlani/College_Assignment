#include <stdio.h>

long long int min(long long int a, long long int b)
{
	long long int m;
	if(a>=b)
		m=b;
	if(b>a)
		m=a;
	return m;
}

void display(long long int a[],int c)
{
	int i;
	for(i=0;i<=c;i++)
		printf("%lld ",a[i]);
	printf("\n");
}

int main()
{
	long long int q1[1000]={0};
	long long int q2[1000]={0};
	long long int q3[1000]={0};
	long long int ans[1000]={0};
	int c=1;
	q1[0]=1,q2[0]=1,q3[0]=1;
	q1[1]=3,q2[1]=3,q3[1]=3;
	q1[2]=5,q2[2]=5,q3[2]=5;
	q1[3]=7,q2[3]=7,q3[3]=7;
	ans[0]=1;
	int p1=0,f1=4;
	int p2=0,f2=4;
	int p3=0,f3=4;
	int n;
	scanf("%d",&n);
	int prev=0;
	while(c<n)
	{
		long long int m=min(q1[p1]*3,min(q2[p2]*5,q3[p3]*7));
		if(m==prev)
		{
			if(m==(q1[p1]*3))
				p1++;
			else if(m==(q2[p2]*5))
				p2++;
			else if(m==(q3[p3]*7))
				p3++;
			//printf("p1: %d p2: %d p3: %d \n",p1,p2,p3);
			//printf("f1: %d f2: %d f3: %d \n",f1,f2,f3);
			continue;
		}
		else if(m==(q1[p1]*3))
		{
			ans[c]=m;
			c++;
			if(c>4)
			{
				q1[f1]=m;
				f1++;
				q2[f2]=m;
				f2++;
				q3[f3]=m;
				f3++;
			}
			p1++;
			//printf("p1: %d p2: %d p3: %d \n",p1,p2,p3);
			//printf("f1: %d f2: %d f3: %d \n",f1,f2,f3);

			// printf("a\n");
			// display(q1,c);
			// display(q2,c);
			// display(q3,c);
			// display(ans,c);
		}
		else if(m==(q2[p2]*5))
		{
			ans[c]=m;
			c++;
			if(c>4)
			{	
				q1[f1]=m;
				f1++;
				q2[f2]=m;
				f2++;
				q3[f3]=m;
				f3++;
			}
			p2++;
			//printf("p1: %d p2: %d p3: %d \n",p1,p2,p3);
			//printf("f1: %d f2: %d f3: %d \n",f1,f2,f3);

			// printf("b\n");
			// display(q1,c);
			// display(q2,c);
			// display(q3,c);
			// display(ans,c);
		}
		else if(m==(q3[p3]*7))
		{
			ans[c]=m;
			c++;
			if(c>4)
			{
				q1[f1]=m;
				f1++;
				q2[f2]=m;
				f2++;
				q3[f3]=m;
				f3++;
			}
			p3++;
			//printf("p1: %d p2: %d p3: %d \n",p1,p2,p3);
			//printf("f1: %d f2: %d f3: %d \n",f1,f2,f3);

			//printf("c\n");
			// display(q1,c);
			// display(q2,c);
			// display(q3,c);
			//display(ans,c);
		} 
		prev=m;
	}
	printf("%lld",ans[n-1]);
	return 0;
}

