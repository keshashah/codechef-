#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
		
	while(t--)
	{
		int n,count=0;
		scanf("%d",&n);

		while(n != 0)
		{
			if(n>=2048)	
				n-=2048;
			else if(n>=1024)
				n-=1024;
			else if(n>=512)
				n-=512;
			else if(n>=256)
				n-=256;
			else if(n>=128)
				n-=128;
			else if(n>=64)
				n-=64;
			else if(n>=32)
				n-=32;
			else if(n>=16)
				n-=16;
			else if(n>=8)
				n-=8;
			else if(n>=4)
				n-=4;
			else if(n>=2)
				n-=2;
			else if(n>=1)
				n-=1;
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
