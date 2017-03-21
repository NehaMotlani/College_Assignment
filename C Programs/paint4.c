#include <stdio.h>

int main()
{
	int c;
	scanf("%d",&c);
	int j;
	for(j=0;j<c;j++)
	{
		int a[9];
		int q; 
		scanf("%d",&q);
		int minai=10000;
		int mini;
		int i;
		for(i=0;i<9;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]<=minai)
			{
				minai=a[i];
				mini=i;
			}
		}
		if(minai>q)
		{
			printf("-1");
		}
		else
		{
			int count=q/minai;
			int excess=q%minai;
			int k=0;
			for(i=8;i>mini && excess>0;i--){
				while(a[i]<=minai+excess)
				{
					printf("%d",i+1);
					excess=(excess-a[i]+minai);
					k++;
				}
			}
			while(count>k)
			{
				printf("%d",mini+1);
				k++;
			}
		}
		printf("\n");
	}
	return 0;
}	