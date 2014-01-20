#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int t;
	scanf("%d",&t);
		
	while(t--)
	{
		char abc[1000000];
		scanf("%s",abc);
		
		long long int ans=1;
		int i;
		int flag=0;
		int len=strlen(abc);
//		printf("%d",len);
		for(i=0;i<len/2;i++)
		{
			if((abc[i] != abc[len-i-1]) && abc[i] != '?' && abc[len-i-1] != '?')
			{
				flag=1;
				break;
			}
			if(abc[i]=='?' && abc[len-i-1]=='?')
			{	
				ans=ans*26;
				ans=ans%10000009;
			}	
		}
		if(flag==0 && len%2==1)
		{
			if(abc[len/2]=='?' && abc[len/2]=='?')
			{
				ans*=26;
				ans=ans%10000009;
			}

		}	
		
		if(flag==0)
		printf("%lld\n",ans);
		else
		printf("0\n");
	}

	return 0;
}
