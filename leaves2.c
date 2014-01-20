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

		for(i=0;i<level;i++)
			scanf("%ld",&ar[i]);
		
		if(ar[level-1]%2 == 1)	
		{
			printf("No\n");
			continue;
		}
		
		long int sum;
		int flag=0;
		for(i=level-2;i>0;i--)
		{	
			ar[i+1]=ar[i+1]/2;
			sum=ar[i+1]+ar[i];
		//	printf("Sum %ld i+1 %ld i %ld\n",sum,ar[i+1],ar[i]);
			if(sum%2 ==1)
			{
				flag=1;
				printf("No\n");
				break;
			}
			ar[i]=sum;
		}
		if(flag==1)
			continue;
		if(ar[1]==2)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;

}
