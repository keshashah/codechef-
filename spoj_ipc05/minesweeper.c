#include<stdio.h>

int main()
{
	int t,p;
	scanf("%d",&t);
		
	for(p=1;p<=t;p++)
	{
		printf("Case %d:\n",p);
		int i,j,n,m;
		scanf("%d %d",&n,&m);

		char mine[n][m];

		for(i=0;i<n;i++)
		{
		//	for(j=0;j<m;j++)
		//	{
				scanf("%s",&mine[i]);
		//	}
		}
	/*	for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
				printf("%c",mine[i][j]);
			printf("\n");
		}*/

		//printf("K1");
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(mine[i][j]=='*')
					printf("*");
				else
				{
				int kesha=0;
				if(i-1>=0 && j-1>=0 && mine[i-1][j-1]=='*')
				{
					kesha++;
				}
				if(i-1>=0 && j>=0 && mine[i-1][j]=='*')
				{
					kesha++;
				}
				if(i>=0 && j-1>=0 && mine[i][j-1]=='*')
				{
					kesha++;
				}
				if(i-1>=0 && j+1<m && mine[i-1][j+1]=='*')
				{
					kesha++;
				}
				if(i>=0 && j+1<m && mine[i][j+1]=='*')
				{
					kesha++;
				}
				if(i+1<n && j-1>=0 && mine[i+1][j-1]=='*')
				{
					kesha++;
				}
				if(i+1<n && j>=0 && mine[i+1][j]=='*')
				{
					kesha++;
				}
				
				if(i+1<n && j+1<m && mine[i+1][j+1]=='*')
				{
					kesha++;
				}
	
				printf("%d",kesha);
				}
			}
			printf("\n");
		}
	}
	return 0;

}


