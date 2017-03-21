#include<stdio.h>
#include<stdlib.h>
struct opponents
{
	long long int skill,entertainment;
};

struct opponents p2[100005];
typedef struct opponents opp;
int bound_lower(long long int p,long long int pri)
{
	int small,big;
	long long int ret=p;
	for(small=0,big=p-1;small<big;)
	{       
		int m=(small+big)>>1;
		if(p2[m].skill>pri)
		{       
			ret=m;
			big=m-1;
		}
		else
			small=m+1;
	}
	return ret-1;
}
int fnccompare(const void *x,const void *y);
int bound_upper(long long int p,long long int pri);
int main()
{
	int t,m,j,i;
	long long int up,l;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
		scanf("%lld %lld",&p2[i].skill,&p2[i].entertainment);
	}
	scanf("%d",&m);
	qsort(p2,t,sizeof(opp),fnccompare);
	long long int sort[100005];
	int z;
	sort[0]=0;
	sort[1]=0;
	for(z=1;z<=t;z++)
	{
		sort[z]=sort[z-1]+p2[z-1].entertainment;	
	}
	while(m)
	{
		scanf("%lld %lld",&up,&l);
		long long int buup,bll;
		bll=bound_lower(t,l);
		buup=bound_upper(t,up);
		long long int total=0;
		total=sort[bll+1]-sort[buup];		
		printf("%lld\n",total);
		m--;
	}
	return 0;
}

int bound_upper(long long int p,long long int pri)
{
	int less,big;
	long long int ret=p;
	for(less=0,big=p-1;less<big;)
	{
		int m=(less+big)>>1;
		if(p2[m].skill>pri)
		{
			ret=m-1;
			big=m-1;
		}
		else if(p2[m].skill==pri)
		{
			ret=m-1;
			big=m-1;
		}
		else
			less=m+1;
	}
	return ret+1;
}




int fnccompare(const void *x,const void *y)
{
	opp *oa = (opp*)x;
	opp *ob = (opp*)y;
	if((oa->skill)<(ob->skill))
		return -1;
	else if((oa->skill)>(ob->skill))
		return 1;
	return 0;
}
