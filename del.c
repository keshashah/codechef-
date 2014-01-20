#include<stdio.h>
int main()
{
	char a[41][100];
	int t,n,i,j;
	scanf("%d",&t);	
	while(t--)
	{
		scanf("%d",&n);
		getchar();
		for(i=0;i<n;i++)
		gets(a[i]);
		if(a[n-1][0]=='L')
		printf("Begin on %s\n",&a[n-1][8]);
		else
		printf("Begin on %s\n",&a[n-1][9]);
		for(i=n-2;i>0;i--)
		{
			if((a[i][0]=='L')&&(a[i+1][0]=='L'))
			printf("Right on %s\n",&a[i][8]);
			else if((a[i][0]=='L')&&(a[i+1][0]=='R'))
			printf("Left on %s\n",&a[i][8]);
                        if((a[i][0]=='R')&&(a[i+1][0]=='L'))
                        printf("Right on %s\n",&a[i][9]);
                        else if((a[i][0]=='R')&&(a[i+1][0]=='R'))
                        printf("Left on %s\n",&a[i][9]);
		}
                if(a[1][0]=='L')
                printf("Right on %s\n",&a[i][9]);
               	else if(a[1][0]=='R')
                printf("Left on %s\n",&a[i][9]);
 
	}
	return 0;
}
