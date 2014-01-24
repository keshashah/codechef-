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

		scanf("%ld",&q);
		for(i=0;i<q;i++)
		{
			//printf("%ld\n",a[i]);
			scanf("%ld",&temp);
			long int first = 0;
   			long int last = n - 1;
   			long int middle = (first+last)/2;
 
			while( first <= last )
			{
      				if ( a[middle] < temp )
         				first = middle + 1;    
      				else if ( a[middle] == temp ) 
      				{
         				printf("YES\n");
         				break;
      				}
      				else
         			last = middle - 1;
 
      				middle = (first + last)/2;
   			}
  			if ( first > last )
      			printf("NO\n");	
		}
	}

	return 0;
}


