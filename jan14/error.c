#include<stdio.h>
#include<string.h>

int main()
{
	int t;
	scanf("%d",&t);
	char s[100001];
	getchar();
	while(t--)
	{
		gets(s);
		if(strstr(s,"101"))
			printf("Good\n");	
		else if(strstr(s,"010"))
			printf("Good\n");
		else
			printf("Bad\n");
	}
	return 0;
}
