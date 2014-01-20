#include<stdio.h>

long long int gcd(long long int a,long long int b)
{
	if(b==0)
		return a;
	else if(b>a)
		return gcd(b,a);
	else
		return gcd(b,a%b);
}

long long int power(long long int base,long long int p)
{
	long long int i,ans=base;
	for(i=1;i<p;i++)
	{
		ans*=base;
	}
	return ans;
}

int main()
{
	long long int n,k,m;
	scanf("%lld %lld %lld",&n,&k,&m);
		
	long long int i,sum=0;
	for(i=1;i<n;i++)
	{
		if(gcd(i,n)==1)
		{
			sum+=power(i,k);
		}
		sum%=m;
	}

	printf("%lld\n",sum);
	return 0;
}
