#include<stdio.h>
#include<string.h>

int main()
{
	int t;
	scanf("%d",&t);
		
	while(t--)
	{
		char one[1000],two[1000];
		scanf("%s %s",one,two);
		int ar[26]={0};		

		if(strlen(one) != strlen(two))
		{
			printf("NO\n");
			continue;
		}
		int i;
		for(i=0;i<strlen(one);i++)
		{
			ar[(one[i]-'a')]+=1;
			ar[(two[i]-'a')]-=1;
		}
		
		int flag=0;
		for(i=0;i<26;i++)
		{
			if(ar[i]!=0)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			printf("NO\n");
		else
			printf("YES\n");

	}

	return 0;
}
