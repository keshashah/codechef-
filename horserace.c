#include<stdio.h>
#include<math.h>

int main()
{	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int a[n];
		int j,i;
		
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);

		int min=abs(a[1]-a[0]);
		for(i=0;i<n;i++)
		{
			for(j=n-1;j>i;j--)
			{
				if(abs(a[i]-a[j])<min)
				{	
					min=abs(a[i]-a[j]);
				}
			}
		}
		printf("%d\n",min);
	}
	return 0;
}
