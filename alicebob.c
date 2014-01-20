#include<stdio.h>

int  main()
{
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
		int n;
		scanf("%d",&n);
		
		(n%2)?printf("BOB\n"):printf("ALICE\n");

	}
	return 0;
}
