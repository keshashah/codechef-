#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
//		printf("tis%d\n",t);
		int i,j,n,winner=1;//1-> bob, 0 alice
		scanf("%d",&n);
//		printf("n is %d\n",n);
		int temp;
		for(i=0;i<n;i++)
		{
			scanf("%d",&temp);
			while(temp>=(i+1))
			{
				temp-=(i+1);
				winner=1-winner;
			}
		}
		if(winner==1)
			printf("BOB\n");
		else
			printf("ALICE\n");
	}

	return 0;
}
