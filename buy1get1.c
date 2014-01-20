#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,count;
	scanf("%d",&t);

	while(t--)
	{
		int a[256]={0};
		char str[201];
		scanf("%s",str);
		count=0;

		for(i=0;i<strlen(str);i++)
		{
			if(a[str[i]]==1)
			{
				a[str[i]]=0;
			}
			else
			{
				count++;
				a[str[i]]=1;			
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
