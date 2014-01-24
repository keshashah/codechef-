#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	scanf("%d",&n);

	while(n--)
	{
		char s[120];
		scanf("%s",s);
	
		int k=strlen(s);
		if(k<=10)
		printf("%s\n",s);	
		else
		printf("%c%d%c\n",s[0],strlen(s)-2,s[k-1]);

	}

	return 0;
}


