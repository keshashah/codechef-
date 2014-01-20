#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
		
	while(t--)
	{
		long int i,level;
		scanf("%ld",&level);
		long int ar[level];

		int flag=0;
		for(i=0;i<level;i++)
			scanf("%ld",&ar[i]);
		
		if((level==1 && ar[0]!=1) || (level>1 && ar[0]!=0))
		{
			flag=1;
		//	printf("No\n");
		//	continue;
		}

		long int nonleaf=1,sum=1;
		for(i=0;i<level;i++)
		{	
			if(nonleaf<ar[i])
			{
				flag=1;
				break;
			}
			nonleaf-=ar[i];
			nonleaf*=2;			
		}
		if(flag==1)
		{
			printf("No\n");
			continue;
		}
		if(nonleaf==0)
			printf("Yes\n");
		else
			printf("No\n");

	}
	return 0;

}
