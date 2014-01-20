#include<stdio.h>

int paren[1001]={0};
paren[2]=1;

int fun(int n)
{
	if(paren[n] != 0 )
		return paren[n];
	else
	{
		paren[n]+=2*fun(n-1);
		return paren[n];
	}
}

int main()
{
	int paren[1000]={0};
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		
		paren[2]=1;
		paren[3]=2;
	
		
		for(j=4;j<=1000;j++)
		{
		for(i=2;i<j;i++)
		{
			paren[j]+=(i)*paren[j-i+1];
		}
		}
	}
	return 0;
}
