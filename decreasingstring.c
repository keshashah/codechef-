#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		int n,start,asci;
		scanf("%d",&n);
	
//		n+=ceil(n/25)+1;
		(n<=25)
			n+=1;
		else if(n<=50)
			n+=2;
		else if(n<=75)
			n+=3;
		else if(n<=100)
			n+=4;
		
		start=n%26;
		asci=96+start;
		while(n>0)
		{
			if(asci==96)
				asci=122;
			printf("%c",asci);
			asci--;
			n--;
		}
		printf("\n");

	}

	return 0;
}
