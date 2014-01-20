#include<stdio.h>

int main()
{
	int i,j, n,k;
	scanf("%d %d",&n,&k);
	char click[8];
	//gets(click);
	int abc[n];
        getchar();	
	for(i=0;i<n;i++)
		abc[i]=0;

	while(k--)
	{	
		gets(click);
		if(!strcmp(click,"CLOSEALL"))
		{
			for(j=0;j<n;j++)
				abc[j]=0;
		}
		else
		{
			int t=click[6]-'0';
			abc[t-1]=1-abc[t-1];
		}
		int count=0;
		for(i=0;i<n;i++)
		{
			if(abc[i]==1)
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
