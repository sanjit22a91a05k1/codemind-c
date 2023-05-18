#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int p,q;
    scanf("%d%d",&p,&q);
    int max=a[0];
    int c=1;
    for(int i=0; i<n; i++)
    {
       if(a[i]>=p && a[i]<=q)
       {
           if(a[i]>max)
           {
               max=a[i];
               c=0;
           }
       }
    }
   if(c==0)
   {
       printf("%d",max);
   }
   else
   {
       printf("-1");
   }
}