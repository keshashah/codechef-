#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		char a[11],b[6];
		scanf("%s %s",a,b);
		if(strstr(a,b))
			printf("1\n");
		else
			printf("0\n");
	}
	return 0;
}
