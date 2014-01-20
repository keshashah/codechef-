#include<stdio.h>
#include<string.h>

int main()
{
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
		int n,j,i;
		scanf("%d",&n);
		char name[n][30],ch;
		int sign[n];
		
		for(i=0;i<n;i++)
		{
			scanf("%s",name[i]);
			scanf("%c",&ch);
			if(ch=='+')
				sign[i]=1;
			else
				sign[i]=-1;
//			printf("i is %d %s %s\n",i,name[i],sign[i]);
		}

		for(i=n;i>=0;i--)
		{
			for(j=i-1;j>=0;j--)
			{
				if(strcmp(name[i],name[j])==0 && sign[j]!=0)
					sign[j]=0;
			}
		}

		int counter=0;
		for(i=0;i<n;i++)
		{
			counter+=sign[i];
		}
		printf("%d\n",counter);
	}
	return 0;
}
