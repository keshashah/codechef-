#include<stdio.h>
#include<string.h>
int mod(int a)
{
	return (a<0)?(-1)*a:a;
} 

int main()
{
	int t;
	scanf("%d",&t);
		char a[11];
	gets(a); 
	while(t--)
	{
 		gets(a);
		if(strlen(a) !=5 || a[2] != '-' || a[0]<'a' || a[0]>'h' || a[3]<'a' || a[3] >'h' || a[1]<'1' || a[1] >'8' || a[4] <'1' || a[4] > '8')
		{
			printf("Error\n");
		}
 
		else if((mod(a[0]-a[3])==1) && (mod(a[1]-a[4])==2))
		{
			printf("Yes\n");
		}
		else if((mod(a[0]-a[3])==2) && (mod(a[1]-a[4])==1))
		{
			printf("Yes\n");
		}
		else
			printf("No\n");
	}
 
	return 0;
}
