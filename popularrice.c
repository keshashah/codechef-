#include<stdio.h>
#include<string.h>

int main()
{
	int count,t,i,j;
	scanf("%d",&t);
	
	while(t--)
	{
		int n;
		scanf("%d",&n);

		char userid[n][21];
		char sign[n];

		for(i=0;i<n;i++)
		{
			scanf("%s",userid[i]);
			scanf("%c",&sign[i]);
			scanf("%c",&sign[i]);
		}

		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(strcmp(userid[j],userid[j-1])<0)
				{
					char temp[21];
					strcpy(temp,userid[j]);
					strcpy(userid[j],userid[j-1]);
					strcpy(userid[j-1],temp);
					char t2;
					t2=sign[j];
					sign[j]=sign[j-1];
					sign[j-1]=t2;
				}
			}
//			printf("%s\n",userid[i]);
		}
	
		count=0;
		i=n-1;
		while(i>=0)
		{
			if(sign[i]=='-')
				count--;
			else
				count++;
			i--;
			while(strcmp(userid[i],userid[i+1])==0)
			{
				i--;
			}	
		}	
		printf("%d\n",count);
	}
	return 0;
}
