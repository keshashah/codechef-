#include<stdio.h>

int main()
{
	int t=10;
	while(t--)
	{	
		int ar[42]={0};
		int n=10,temp;
		while(n--)
		{
			scanf("%d",&temp);
			ar[temp%42]++;
		}

		int c=0;
		for(temp=0;temp<42;temp++)
		{
//			printf("ar[%d] is %d\n",temp,ar[temp]);
			if(ar[temp]>0)
				c++;
		}
		printf("%d\n",c);

	}

	return 0;
}
