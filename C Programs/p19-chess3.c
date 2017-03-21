#include<stdio.h>
#include<string.h>
int main()
{
	int c;
	scanf("%d",&c);
	int integer[999]={0};
	char s[105];
	int l;
	int j;
	for(j=0;j<c;j++)
	{
		scanf("%s",s);
		l=strlen(s);
		int i;
		int z=0;
		for(i=l-1;i>=0;i--)
		{
			integer[z]=(s[i]-'0');
			z++;
		}
//		for(i=0;i<l;i++)
//			printf("%d\n",integer[i]);
		i=0;
		if(l!=1 || integer[0]!=1)
		{
			if(integer[0]-1>=0)
				integer[0]-=1;
			else
			{
				integer[0]--;
				while(integer[i]<0)
				{
					integer[i]+=10;
					integer[i+1]-=1;
					i++;
				}
			}
			//for(i=0;i<l;i++)printf("%d",integer[i]);
			int t=0;
			i=0;
			//printf("%d",l);
			while(i<l)
			{
				integer[i]=integer[i]*2+t;
		//		printf("%d\n",integer[i]);
				t=integer[i]/10;//printf("%d\n",t);
				integer[i]=integer[i]%10;
			//	integer[i+1]=t;
			/*	if(integer[i]>9)
				{
					integer[i]%=10;
					t=integer[i]/10;
				}
				else t=0;*/
				i++;
			}
			if(t!=0)
				integer[l++]=t;
			//		printf("%d",l);
			//if(integer[l]==0)l--;

			//		printf("%d",l);
			for(i=l-1;i>=0;i--)
			{
				printf("%d",integer[i]);
			}
		}
		if(l==1 && integer[0]==1)
		{
			printf("1\n");
			continue;
		}
		printf("\n");
	}	
	return 0;
}


