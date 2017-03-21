#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int d,m,year;
	int i,k=0;
	for(i=0;i<t;i++)
	{
		scanf("%d %d %d",&d,&m,&year);
		{
		if((m<1)||(m>12)||(year<1)||(d>31)||(d<1))
			k++;
		if((m==2) && (d==30))
			k++;
		if(((m==2) || (m==4) || (m==6) || (m==9) || (m==11)) && (d==31))
			k++;
		if((m==2) && year%100==0 && (year%400)!=0 && d==29)
			k++;
		if(m==2 && (year%4)!=0 && d==29)
			k++;
		}
		if(k==0)
			printf("yes\n");
		else
			printf("no\n");
		k=0;
	}
	return 0;
}
