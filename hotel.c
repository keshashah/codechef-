#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
		
	while(t--)
	{
		int abc[1000]={0};
//		printf("kesha %d %d %d",abc[3],abc[0],abc[100]);
		int n,i,j;
		scanf("%d",&n);
		int start[n],end[n];
	
		for(i=0;i<n;i++)	
			scanf("%d",&start[i]);
		
		for(i=0;i<n;i++)
			scanf("%d",&end[i]);
		
		int startmin=start[0],endmax=end[0];

		for(i=0;i<n;i++)
		{
			for(j=start[i];j<end[i];j++)
				abc[j]+=1;

			if(start[i]<startmin)
				startmin=start[i];
		
			if(end[i]>endmax)
				endmax=end[i];
		}
		
		int maxans=abc[startmin];
		for(j=startmin+1;j<=endmax;j++)
		{
			if(abc[j]>maxans)
				maxans=abc[j];
		}
		printf("%d\n",maxans);
	}

	return 0;
}
