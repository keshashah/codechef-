#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		int i,n,maxcount=0,maxno;
		scanf("%d",&n);
		
		int ar[n];
		int a[10000]={0};
		
		for(i=0;i<n;i++)
		{
			scanf("%d",&ar[i]);
			a[ar[i]]+=1;
		}
		maxno=ar[0];

		for(i=0;i<n;i++)
		{	
			if(maxcount<a[ar[i]] || (maxcount==a[ar[i]] && maxno>ar[i]))
			{
				maxcount=a[ar[i]];
				maxno=ar[i];
			}
		}

		printf("%d %d\n",maxno,maxcount);
	}
	return 0;
}
