#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	int P,Q;
	scanf("%d %d",&P,&Q);
	int min,M=10000000,cx[100000],cy[100000];
	int t,count=0,xa,ya;
	char arr[100][100];
	int i,j;
	for(i=0;i<P;i++)
		for(j=0;j<Q;j++)
			arr[i][j]='.';
	scanf("%d",&t);
	while(t--)
	{
		min=M;
		char ques[5];
		int s,t;
		scanf("%s %d %d",ques,&s,&t);
		if(ques[0]!='A')
		{
			int k;
			for(k=0;k<count;k++)
			{
				if((abs(cx[k]-s)+abs(cy[k]-t))<min)
				{

					min=abs(cx[k]-s)+abs(cy[k]-t);
					ya=cy[k];
					xa=cx[k];
				}
				if((abs(cx[k]-s)+abs(cy[k]-t))==min)
				{
					if(cx[k]<xa)
					{
						ya=cy[k];
						xa=cx[k];
					}
					else if(cx[k]==xa)
					{
						if(cy[k]<ya)
						{
							ya=cy[k];
							xa=cx[k];
						}
					}

				}

			}
		

		if(min!=M)
			printf("%d %d\n",xa,ya);
		else
			printf("-1 -1\n");
		}
		if(ques[0]=='A')
		{
			cx[count]=s;
			cy[count]=t;
			arr[s][t]='#';
			count++;
		}
	}
	return 0;
}
