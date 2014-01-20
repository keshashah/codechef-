#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
		
	while(t--)
	{
		int n,i;
		scanf("%d",&n);

		char a[n];
		scanf("%s",a);
		int count=0;		
		
		for(i=0;i<n;i++)
		{
			if(!(a[i]=='1' || a[i+1]=='1' || a[i-1]=='1'))
				count++;
//			else if(a[i]=='0' && a[i-1]=='0' && i==n-1)
//				count++;			
//			else if(a[i]=='0' && a[i-1]=='0' && a[i+1]=='0')
//				count++;
			
		}
		printf("%d\n",count);
	}

	return 0;
}
