#include<stdio.h>

int main()
{
	int base, number, digits;
	scanf("%d %d %d",&number,&base,&digits);		
	base++;	
	int index;

	for(index=0;number != 0 && index<digits;index++)
	{
		printf("%d ",number%base);
		number=number/base;	
	}
	
	for(;index<digits;index++)
	{
		printf("0 ");
	}
	printf("\n");	
	return 0;
}
