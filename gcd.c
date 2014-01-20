#include<stdio.h>
#include<string.h>
int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main()
{
	int t;
	scanf("%d",&t);
		
	while(t--)
	{
		int n1;
		char n2[251];
		scanf("%d %s",&n1,n2);
		
		int i,n,j=0,k;
		if(n1==0)
			printf("%s\n",n2);
		else
		{
			for(i=0;i<strlen(n2);i++)
			{
				n=n2[i]-'0';
				k=j*10+n;	
				j=k%n1;	
			}	
			printf("%d\n",gcd(n1,j));
		}
	}
	return 0;
}
