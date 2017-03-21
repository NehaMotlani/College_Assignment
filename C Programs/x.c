#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	int i;
	char s[4];
	int m=0;
	for(i=0;i<t;i++)
	{
		scanf("%s",s);
		if(s[1]=='+')
			m++;
		if(s[1]=='-')
			m--;
	}
	printf("%d\n",m);
	return 0;
}

