#include<stdio.h>
#include<string.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
//		printf("Hi");
		int tes=0,i;
		char s[1000];
		scanf("%s",s);
//		printf("Hello");
		for(i=0;i<strlen(s);i++)
			tes+=s[i];
		tes=tes/strlen(s);
//		printf("%d\n",tes);
		printf("%c\n",(tes));
	}
	return 0;
}
