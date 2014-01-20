#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
		int f=0;
		long long int l,d,s,c,i,lastday,tot;
		scanf("%lld %lld %lld %lld",&l,&d,&s,&c);

		lastday=s;
		for(i=0;i<d;i++)
		{
			if(i!=0)
				lastday+=lastday*c;
			if(lastday>=l)
			{
				f=1;
				break;
			}
		}
		if(f==0)
			printf("DEAD AND ROTTING\n");
		else
			printf("ALIVE AND KICKING\n");
	}

	return 0;
}
