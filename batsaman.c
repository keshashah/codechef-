#include<stdio.h>

int comb(int n,int r)
{
	int i,ans=1;
	for(i=0;i<r;i++)
		ans*=n-i;
	for(i=1;i<=r;i++)
		ans/=i;
	
	return ans;
}

int main()
{
	int t;
	scanf("%d",&t);

	while(t)
	{
	//	printf("Enter");
		int temp,i;
		int scores[101]={0};
		for(i=0;i<11;i++)
		{
			scanf("%d",&temp);
			scores[temp]++;
		}
		scanf("%d",&temp);

		for(i=100;i>=0 && temp-scores[i]>=0;i--)
		{
			temp-=scores[i];
		}
	//	printf("n is %d and r is %d \n",scores[i],temp);
		printf("%d\n",comb(scores[i],temp));
		t-=1;
	}
	return 0;
}
