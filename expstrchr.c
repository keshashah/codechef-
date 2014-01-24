#include<stdio.h>
#include<string.h>
int main()
{
	char *S="Hello how are u?";
	char *p=strchr(S,'a');
	char *R = "aww";
	printf("%d\n",strcspn(S,R));
	printf("%s\n",strpbrk(S,R));
	printf("%s\n",p);
	printf("%s",strstr(S,R));
	return 0;
}
