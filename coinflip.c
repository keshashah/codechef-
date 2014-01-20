#include<stdio.h>

int main()
{
	int t,g,i,q;
	long int n;
	scanf("%d",&t);
	while(t--)
	{
		//int g;
		scanf("%d",&g);
		while(g--)
		{	
		//	long int n;
		//	int i,q;
			scanf("%d %ld %d",&i,&n,&q);
			if(n%2==0)
				printf("%ld\n",n/2);		
			else if(i==1)
			{
				if(q==1)
				{
					printf("%ld\n",n/2);
				}
				else
				{
					printf("%ld\n",(n/2+1));
				}
			}
			else
			{
				if(q==1)
				{			
					printf("%ld\n",(n/2+1));
				}
				else
				{
					printf("%ld\n",n/2);
				}
			}

		}

	}
	return 0;
}
