#include<stdio.h>

int main()
{
	long long int i,j,n,k;
	scanf("%lld %lld",&n,&k);
	long long int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
	}

	long long int avg=0,count=0;
	for(i=0;i<n;i++)
	{
		avg=0;
		for(j=i;j<n;j++)
		{
			avg+=arr[j];
			if(avg/(j-i+1)>=k)
				count++;
		}
	}
	printf("%lld\n",count);
	return 0;
}
