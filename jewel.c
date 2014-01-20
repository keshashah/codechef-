#include<stdio.h>
#include<string.h>
int main()
{	
	int t,count,i;
	scanf("%d",&t);
		
		char s[101];
		char j[101];
	while(t--)
	{
		char ar[256]={0};

		scanf("%s",j);
		scanf("%s",s);
	
		for(i=0;i<strlen(j);i++)
		{
			ar[j[i]]=1;
		}		

		count=0;
		for(i=0;i<strlen(s);i++)
		{
			if(ar[s[i]]==1)
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
