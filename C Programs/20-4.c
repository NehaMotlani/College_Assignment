#include <stdio.h>

void display(int s[],int n)
{
	int i;
	for (i = 0; i < n; ++i)
	{
		/* code */
	printf("%d",s[i]);
	}
}

void sort(int s[],int n)
{
	int i,j,temp;
	for (i = 0; i < n; ++i)
	{	

		for (j= 0; j < n-i-1; ++j)
		{
			if(s[j]>s[j+1]){
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	display(s,n);
}

int main()
{
	int n;
	scanf("%d",&n);
	int skill[n];
	int ent[n];
	int i;
	for (i= 0; i < n; ++i)
		scanf("%d %d",&skill[i],&ent[i]);
	sort(skill,n);
}
