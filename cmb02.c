#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>

int reverse(int a)
{
   	int ans=0,rem;
	while(a>0)
	{
		rem=a%10;
		ans=(ans*10)+rem;
		a/=10;
	}
	return ans;
}
/*
int ispalindrome(int a)
{
	char abc[5]={'\0'};
	
	sprintf(abc,"%d",a);
	int len=strlen(abc),i;
	
	for(i=0;i<len/2;i++)
	{
		if(abc[i]!=abc[len-1-i])
			return 0;
	}
	return 1;
}
*/
int main()
{
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
		int num;
		scanf("%d",&num);
		num++;	
		while(reverse(num) != num)
		{
			num=num++;
		}
		printf("%d\n",num);
	}
	return 0;
}
