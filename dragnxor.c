#include<stdio.h>

int count(int x)
{
	int c=0;
	for(;x>0;x=x/2)
	{
		if(x%2==1)
			c++;
	}
//	printf("c is %d\n",c);		
	return c;
}

int abs(int x)
{
	return (x<0)?-x:x;
}

int number(char a[],int n)
{
	int i,ans=0,mul=1;
	for(i=n-1;i>=0;i--)
	{
		ans=ans+(a[i]*mul);
		mul*=2;
	}
	return ans;
}

int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		int i,n;
		long int a,b;
		int ca,cb;
		scanf("%d %ld %ld",&n,&a,&b);
		ca=count(a);
		cb=count(b);
		
		int ones=abs(ca+cb-n);
		char ans[n];
		
		for(i=n-1;i>=0;i--)
		{
			if(ones)
			{
				ans[i]=0;
				ones--;
			}
			else
				ans[i]=1;
		}
		
		//for(i=0;i<n;i++)
		//	printf("%d",ans[i]);
		//printf("\n");		

		printf("%d\n",number(ans,n));
	}
	return 0;
}
