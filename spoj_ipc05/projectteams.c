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
		long int n,q,i,temp;
		scanf("%ld",&n);
		
		long int a[n];
		for(i=0;i<n;i++)
			scanf("%ld",&a[i]);

		qsort(a,n,sizeof(*a),comp);

		long int sum[n/2];
		long int min=a[0]+a[n-1],max=0;
		for(i=0;i<n/2;i++)
		{
			sum[i]=a[i]+a[n-i-1];
			if(min>sum[i])
				min=sum[i];
			if(max<sum[i])
				max=sum[i];
		}

		printf("%d\n",max-min);
	}

	return 0;
}


