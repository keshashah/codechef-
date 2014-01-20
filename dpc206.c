#include<stdio.h>
#include<string.h>
#include<stdlib.h>

long long int reverse(long long int a)
{
   	long long int ans=0,rem;
	while(a>0)
	{
		rem=a%10;
		ans=(ans*10)+rem;
		a/=10;
	}
	return ans;
}

int ispalindrome(long long int a)
{
	long long int rev=reverse(a);
	return (a==rev);
}

int main()
{
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
		long long int num;
		scanf("%lld",&num);
		int count=0;
		
		while(!ispalindrome(num))
		{
			num=num+reverse(num);
			count++;
		}
		printf("%d %lld\n",count,num);
	}
	return 0;
}
