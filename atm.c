#include<stdio.h>

int main()
{
	float bal;
	int rem;
	scanf("%d %f",&rem,&bal);
	
	if((rem%5!=0) || (bal-rem-0.5)<0)
	{
		printf("%.2f\n",bal);
		return 0;	
	}

	printf("%.2f\n",bal-rem-0.5);
	
	return 0;
}
