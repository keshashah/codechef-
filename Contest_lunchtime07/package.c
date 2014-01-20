#include<stdio.h>

unsigned long long int divby2(unsigned long long int k)
{
	if(k%2==1)
	{
		return (k/2)+1;
	}
	else 
		return k/2;
}

int main()
{
	unsigned long long int n;
	unsigned long long int x;
	scanf("%llu %llu",&n,&x);

	unsigned long long int a[n],i,j,temp;
	for(i=0;i<n;i++)
		scanf("%llu",&a[i]);

	//sorting all of the arrays
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[j-1])
			{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
	unsigned long long int s=0,f=0,p;
	for(p=0;p<n;p++)
	{
		if(x>=a[p])
		{
			s++;
			x=x-a[p];
		}
		else if(x<divby2(a[p]))
			f++;
		else 
			x=0;
	}	

	printf("%llu %llu\n",f,s);
	return 0;
}
