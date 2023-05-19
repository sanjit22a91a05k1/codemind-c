#include<stdio.h>
int digit(int t)
{
    int c=0;
   if(t==0)
    {
        return 1;
    }
     while(t!=0)
      {
        int r=t%10;
         c++;
         t=t/10;
        }
        return c;
    
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    int count=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        int t=a[i];
        int c=0;
       
        if(digit(a[i])==k)
        {
            count++;
        }
    }
    printf("%d",count);
}