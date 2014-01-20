#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(void)
{
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);

		long long int root=(long long int)sqrt(n);
		root++;
		for(;n%root!=0;root--)
		{
		}
		long long int other=n/root;
		printf("%lld\n",(long long int)abs(root-other));

	}
	return 0;
}
