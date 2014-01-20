#include<stdio.h>

int main()
{
	long int n;
	scanf("%ld",&n);

	while(n)
	{
		long int no[n];
		long int i,j;
		
		for(i=0;i<n;i++)
		{
			scanf("%ld",&no[i]);
		}
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(no[j]<no[j-1])
				{
					int temp=no[j];
					no[j]=no[j-1];
					no[j-1]=temp;
				}
			}
		}

		long int end=n-1,start=0,count=0;
/*		for(;start<end-1 && no[start]+no[start+1]<no[end];start++)
		{
			for(j=start+1;j<end && no[start]+no[j]<no[end];j++)
			{
				while(no[start]+no[j]<no[end])
				{
					end--;
					count++;
				}
				end=n-1;
			}
		}
*/

		for(i=n-1;i>=2;i--)
		{
			while(start<end)
			{
				if(no[start]+no[end]<no[i])
				{
					count+=end-start;
					start++;
				}
				else
					end--;
			}
		}
		printf("%ld\n",count);	
		scanf("%ld",&n);
	}
	return 0;
}

