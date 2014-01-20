#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
		int n,zeros=0;
		scanf("%d",&n);
		
		while(n!=0)
		{
			n=n/5;
			zeros+=n;
		}	
		printf("%d\n",zeros);

	}
	return 0;
}
