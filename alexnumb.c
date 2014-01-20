#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
		unsigned long long int n,i,temp;
		scanf("%llu",&n);
		
//		printf("%llu\n",(n*(n-1))/2);
		for(i=0;i<n;i++)
			scanf("%llu",&temp);
		printf("%llu\n",(n*(n-1))/2);


	}

	return 0;
}
