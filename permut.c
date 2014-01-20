#include<stdio.h>

int main()
{
	int n, current,next,i;
	scanf("%d",&n);
		
	int arr[n+1],visit[n+1];
		
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
		visit[n]=0;
	}
	
	int count=0;

	for(i=1;i<=n;i++)
	{
		current=i;
		next=arr[current];
		while(1)
		{
			if(visit[current]==1)
				break;
			visit[current]=1;
			if(current==i)
				count++;
			current=next;
			next=arr[current];
		}
	}
	
	printf("%d\n",count);
	
	for(i=1;i<=n;i++)
	{
		int flag=0;
		current=i;
		next=arr[current];
		while(1)
		{
			if(visit[current]==0)
				break;
			visit[current]=0;
			if(current==i)
				flag=1;
			printf("%d ",current);
			current=next;
			next=arr[current];
		}
			if(flag==1)
				printf("%d \n",i);
		
	}

	return 0;
}
