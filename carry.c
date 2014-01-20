#include<stdio.h>

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	while(a & b)
	{
		int arem,brem,c=0;
		while(a | b)
		{
			arem=a%10;
			a=a/10;
			brem=b%10;
			b=b/10;
			int sum=arem+brem;
			if(sum>9)
			{
				c++;
				a++;
			}
		}
		if(c==0)	
			printf("No carry operation.\n");
		else if(c==1)
			printf("1 carry operation.\n");
		else
			printf("%d carry operations.\n",c);
		scanf("%d %d",&a,&b);
	}
	return 0;
}
