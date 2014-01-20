#include<stdio.h>

int main()
{	
	int t;
	scanf("%d",&t);
		
	while(t--)
	{
		int i,n;
		scanf("%d",&n);
		
		int a[n];
		for(i=0;i<n;i++)	
		{
			scanf("%d",&a[i]);
		}
		int count=1;
		int min=a[0];
		for(i=1;i<n;i++)
		{
			if(a[i]<=min)
			{
				min=a[i];
				count++;
			}
		}

		printf("%d\n",count);
	}

	return 0;
}
