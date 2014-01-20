#include<sdtio.h>

int main()
{
	int n1,n2,n3,i;
	scanf("%d %d %d",&n1,&n2,&n3);
	int a1[n1],a2[n2],a3[n3];

	for(i=0;i<n1;i++)
		scanf("%d",&a1[i]);

	for(i=0;i<n2;i++)
		scanf("%d",&a2[i]);
	
	for(i=0;i<n3;i++)
		scanf("%d",&a3[i]);

	int max=(n1>n2)?((n1>n3)?n1:n3):((n2>n3)?n2:n3);
	int new[max];
	
	int m=0,n=0,o=0,p=0;	

	while(m<n1 && n<n2 && o<n3)
	{
		if((a1[m]==a2[n]) && a1[m]==a3[o])
		{
			m++;
			n++;
			o++;
			new[p++]=a1[m];			
		}

		a1[m]==a2[n]
	}
	return 0;
}
