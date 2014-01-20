#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		int n,x;
		scanf("%d %d",&n,&x);
		
		int temp;
		int i,sum=0;
		int min=101;		

		for(i=0;i<n;i++)
		{
			scanf("%d",&temp);
			sum+=temp;
			if(min>temp)
				min=temp;
		}
		
		int ans=sum/x;
		if((sum-min)/x==ans)
			printf("-1\n");
		else
			printf("%d\n",ans);
	}
	
	return 0;
}
