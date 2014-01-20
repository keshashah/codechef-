#include<stdio.h>
#include<string.h>

int number(int no,int base)
{
	int rem=0;
	char ans[100];
	int i;
	for(i=0;no!=0;i++)
	{
		ans[i]=no%base;
		no=no/base;
	}

	int ret=0;
	for(i=strlen(ans)-1;i>=0;i--)
	{
		ret=ret*base+ans[i];
	}
	return ret;
}

int ispalindrome(int n)
{
	char buf[100]={'\0'};
	sprintf(buf,"%d",n);
	
	int i;
	int len=strlen(buf);
	for(i=0;i<len;i++)
	{
		if(buf[i] != buf[len-1-i])
			return 0;
	}	
	return 1;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int n;
	scanf("%d",&n);

	int i;
	for(i=2;i<=n;i++)
	{
		int n_base=number(n,i);
		if(ispalindrome(n_base))
			break;
	}
	printf("%d\n",i);
	}
	return 0;
}
