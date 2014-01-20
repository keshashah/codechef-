#include<stdio.h>
 
int main()
{	
	long long int n,m,i,j;
	scanf("%lld %lld",&n,&m);
 
	unsigned long long int ar[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%llu",&ar[i][j]);
		}
	}
	long long int l,k;
	scanf("%lld",&l);
	long long int p[l],q[l];
		
	for(i=0;i<l;i++)
		scanf("%lld %lld",&p[i],&q[i]);
 	int f1=0,f2=0;
	unsigned long long int e1=0,e2=0;
	for(i=0;i<l;i++)
	{
//		printf("Hello\n");
		if(p[i]<=n && q[i]<=m)
		{
			e1+=ar[p[i]-1][q[i]-1];
		}
		else
		{
			f1=1;
			break;
		}
		//printf("e1 is %llu\n",e1);
	}	
		//printf("e1 is %llu\n",e1);
	for(i=0;i<l;i++)
	{
//		printf("Hello2");
		if(p[i]<=m && q[i]<=n)
		{
			e2+=ar[q[i]-1][p[i]-1];
		}
		else
		{
			f2=1;
			break;
		}
		//printf("e2 is %llu\n",e2);
	}
		//printf("e2 is %llu\n",e2);
 
	if(f1==1 && f2==1)
		printf("-1\n");
	else if(f1==1)
		printf("%llu\n",e2);
	else if(f1==2)
		printf("%llu\n",e1);
	else
		printf("%llu\n",(e2>e1)?e2:e1);
	return 0;
}
