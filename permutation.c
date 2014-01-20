#include<stdio.h>

int main()
{
	int n,i,current,next;
	scanf("%d",&n);
	int count=0;
	int arr[n],visited[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		visited[i]=0;
	}
	
	for(i=0;i<n;i++)
	{
		current=i;
		next=arr[i];
		while(1)
		{
			if(visited[current]==1)
				break;
			if(current==i)
				count++;
			visited[current]=1;
			current=next-1;
			next=arr[current];
		}
	
	}	
	printf("%d\n",count);
	int flag;
	for(i=0;i<n;i++)
	{
		flag=0;
		current=i;
		next=arr[i];
		while(1)
		{
			if(visited[current]==2)
				break;
			flag=1;
			visited[current]=2;
			printf("%d ",current+1);
			current=next-1;
			next=arr[current];
		}

		if(flag==1)
			printf("%d\n",i+1);
	
	}

	

	return 0;
}
