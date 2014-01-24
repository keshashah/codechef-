#include<stdio.h>
int min(int a, int b)
{
	return (a<b)?a:b;
}

int main()
{
//	int t;
//	scanf("%d",&t);

//	while(t--)
//	{
		int n,k,temp;
		scanf("%d %d",&n,&k);
		
		int i,ar[n],ones=0,twos=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&ar[i]);
			if(ar[i]==1)
				ones++;
			else 
				twos++;
		}

//		printf("Ones and twos %d %d\n",ones, twos);
		int div=n/k,o=0,t=0,f=0;
		for(i=0;i<k;i++)
		{
//			printf("Here");
			o=0;
			t=0;
			for(temp=0;temp<n;temp+=k)
			{
				if(ar[temp+i]==1)
					o++;
				else
					t++;
			}
//			printf("o and t are %d %d\n",o,t);
			f+=min(o,t);
		}
		f=min(twos,f);
		f=min(ones,f);
		
		printf("%d\n",f);
		
//	}
	return 0;
}
