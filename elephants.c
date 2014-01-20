#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
		int n,candies;
		scanf("%d %d",&n,&candies);
		int i,sum=0,temp;
		for(i=0;i<n;i++)
		{
			scanf("%d",&temp);
			sum+=temp;
		}
		candies>=sum?printf("Yes\n"):printf("No\n");
	}

	return 0;
}
