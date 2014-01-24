#include<stdio.h>
#include<stdlib.h>

int comp (const void * elem1, const void * elem2) 
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}

int main()
{
	int t;
	scanf("%d",&t);
		
	while(t--)
	{
		//printf("h1\n");
		long long int n,q,i,temp;
		scanf("%lld",&n);
		
	//	printf("h2\n");
		long long int a[n],b[n];
		for(i=0;i<n;i++)
			scanf("%lld",&a[i]);
	//	printf("h3\n");
		for(i=0;i<n;i++)
			scanf("%lld",&b[i]);
	//	printf("h4\n");
		qsort(a,n,sizeof(*a),comp);
		qsort(b,n,sizeof(*b),comp);
	
		long long int sum=0;
		for(i=0;i<n;i++)
		{
			long long int mul=a[i]*b[n-i-1];
			sum+=mul;
			sum%=1000000007;
		}
		printf("%d\n",sum);
	}

	return 0;
}


