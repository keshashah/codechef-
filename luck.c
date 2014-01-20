#include<stdio.h>
#include<string.h>

int main()
{
	int k,n,i,j;
	scanf("%d %d",&k,&n);
	
	char luck[52][52],str[52];
	for(i=0;i<k;i++)
		scanf("%s",luck[i]);
	
	for(i=0;i<n;i++)
	{
		scanf("%s",str);
		int f=0;
		if(strlen(str)>=47)	
		{
			printf("Good\n");
			continue;
		}
		for(j=0;j<k;j++)
		{
			if(strstr(str,luck[j]))
			{
				f=1;
				break;
			}
		}
		if(f==0)
		printf("Bad\n");
		else
		printf("Good\n");
	}
	return 0;
}
