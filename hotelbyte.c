#include<stdio.h>

int main()
{	
	int t,i,j;
	scanf("%d",&t);
	
	while(t--)
	{
		int n;
		scanf("%d",&n);

		int ar[1000]={0};
		int start[n],end[n];
		
		for(i=0;i<n;i++)
		{
			scanf("%d",&start[i]);
		}
	
		for(i=0;i<n;i++)
		{
			scanf("%d",&end[i]);
		}

		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(end[j]<end[j-1])
				{
					int temp=end[j];	
					end[j]=end[j-1];
					end[j-1]=temp;
					temp=start[j];	
					start[j]=start[j-1];
					start[j-1]=temp;
				}
			}		
		}
		int max=0;
		for(i=0;i<n;i++)
		{
			for(j=start[i];j<end[i];j++)
			{
				(ar[j])++;
				if(max<ar[j])
					max=ar[j];
			}
		}

		printf("%d\n",max);
	}
	return 0;
}
