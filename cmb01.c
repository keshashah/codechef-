#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int reverse(int a)
{
	int ans=0,rem;
	while(a>0)
	{
		rem=a%10;
		ans=(ans*10)+rem;
		a/=10;
	}
	return ans;
}

int main()
{
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
		int one,two;
		scanf("%d %d",&one,&two);

		one=reverse(one);
		two=reverse(two);
		
		printf("%d\n",reverse(one+two));
	}
	return 0;
}
