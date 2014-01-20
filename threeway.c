#include<stdio.h>

int distance(int a,int b,int c,int d)
{
	return ((a-c)*(a-c))+((b-d)*(b-d));
}

int main()
{
	int t;
	scanf("%d",&t);
		
	while(t--)
	{
		int dist,cx,cy,hx,hy,sx,sy,d1,d2,d3;
		scanf("%d",&dist);
		dist*=dist;
		scanf("%d %d",&cx,&cy);
		scanf("%d %d",&hx,&hy);
		scanf("%d %d",&sx,&sy);
		
		d1=distance(cx,cy,sx,sy);
		d2=distance(cx,cy,hx,hy);
		d3=distance(sx,sy,hx,hy);

		if(d1<=dist)
		{
			if(d2<=dist)
				printf("yes\n");
			else
			{
				if(d3<=dist)
					printf("yes\n");
				else
					printf("no\n");
			}
		}
		else
		{
			if(d2<=dist && d3<=dist)
				printf("yes\n");
			else
				printf("no\n");
		}

	}

	return 0;
}
