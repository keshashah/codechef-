#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
		
	while(t--)
	{
		int a,p;
		scanf("%d %d",&p,&a);

		///we want to find lbh

		float temp;
		temp=p-sqrt(p*p-24*a);
		temp/=12;
		p=p/4; //this gives l+b+h
		a=a/2; //this gives lb+bh+lh

		printf("%.2f\n",temp*(a-temp*p+temp*temp));

	}
	return 0;
}
