#include<stdio.h>
 
int ar[102];
int count[10002]={0};
int main()
{
    int t,n,i,max,val;
    scanf("%d",&t);
    while(t--)
    {
    
          scanf("%d",&n);
          for(i=0;i<n;i++)
          {
          scanf("%d",&ar[i]);
          count[ar[i]]++;
          }
          
          max=0;
          for(i=0;i<n;i++)
          {
          if(count[ar[i]]>max||(count[ar[i]]==max&&ar[i]<val))
          {
          max=count[ar[i]];
          val=ar[i];
          }
          count[ar[i]]=0;
          }
          printf("%d %d\n",val,max);
          }
          
     return 0;
     } 
