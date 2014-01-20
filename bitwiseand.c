#include<stdio.h>

int main()
{
	int i,j,n;
	scanf("%d",&n);
	long long int ai[n];
	
	int f=0;
	long int c=0;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&ai[i]);
		if(!(ai[i] ==0 || ai[i] ==1))
		{
			f=1;
//			if(ai[i]==1)
//				c++;
		}
		if(ai[i]==1)
			c++;
	}
	
	long long int sum=0;
	if(f==1)
	{
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
			sum+=(ai[i]&ai[j]);	
	}
	}
	else
		sum=(c*(c-1)/2);
	printf("%lld\n",sum);

	return 0;
}
