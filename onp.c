#include<stdio.h>
#include<string.h>
	
int main()
{
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
		char input[400], exp[400];
		int i,e=0;

		scanf("%s",input);

		for(i=0;i<strlen(input);i++)
		{
			switch(input[i])
			{
				case '(':
					break;
				case '+':
				case '-':
				case '*':
				case '/':
				case '^':
				{
					exp[e++]=input[i];
					break;
				}
				case ')':
				{
					printf("%c",exp[--e]);
					break;
				}
				default:
				{
					printf("%c",input[i]);
					break;
				}

			}
		}
		printf("\n");
	}

	return 0;
}
