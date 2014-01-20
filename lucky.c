#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		long long int rem=n%7;
		switch(rem)
		{
			case 0:
			case 4:
			{
				printf("%lld\n",(n-rem)>0?n-rem:-1);
				break;
			}
			case 1:
			case 5:
			{
				printf("%lld\n",(n-rem-7)>0?n-rem-7:-1);					break;
			}
			case 2:
			case 6:
			{
				printf("%lld\n",(n-rem-14)>0?n-rem-14:-1);
				break;
			}
			case 3:
			{
				printf("%lld\n",(n-3-21)>0?n-3-21:-1);
				break;
			}
		
		}	
	}
	return 0;
}
