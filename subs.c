#include<stdio.h>

int gcd(int a,int b)
{
	if(a==0)
		return b;
	return gcd(b%a,a);
}

int main()
{
	int t;
	scanf("%d",&t);
		
	while(t--)
	{
		int n,i;
		scanf("%d",&n);
		int ans;
		scanf("%d",&ans);
		for(i=1;i<n;i++)
		{
			int temp;
			scanf("%d",&temp);
			ans=gcd(ans,temp);
		}
		printf("%d\n",ans);
	}
	return 0;
}
