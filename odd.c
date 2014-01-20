#include<stdio.h>
#include<math.h>

int main()
{
	int t;
	scanf("%d",&t);
		
	while(t--)
	{
		int n;
		scanf("%d",&n);

		int base=log2(n);
		int ans=(int)pow(2,base);

		printf("%d\n",ans);
	}

	return 0;

}
