#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		int n,temp;
		scanf("%d",&n);
		int ans;
		scanf("%d",&ans);
		n--;
		while(n--)
		{
			scanf("%d",&temp);
			ans-=temp;
		}
		printf("%d\n",ans);
	
	}

	return 0;
}
