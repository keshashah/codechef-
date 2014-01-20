#include<stdio.h>

int main()
{
	int t,n;
	scanf("%d",&t);

	while(t--)
	{
		scanf("%d",&n);
		getchar();
		char s[41][101];	
		int i;
		for(i=0;i<n;i++)
			gets(s[i]);
		
		if(s[n-1][0]=='L')
			printf("Begin on %s",&s[n-1][8]);
		else
			printf("Begin on %s",&s[n-1][9]);
		printf("\n");		
		
		for(i=n-2;i>=0;i--)
		{
			if(s[i+1][0]=='L')
				printf("Right on %s",&s[i][8]);
			else
				printf("Left on %s",&s[i][9]);
			
			printf("\n");
		}	
		printf("\n");

	}
	return 0;
}
