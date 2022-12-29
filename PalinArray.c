# include<stdio.h>
int main()
{
   int n,c=0;
   scanf("%d",&n);
   for(int i=1; i<=n; i++)
   {
      int x,r,rev=0;
      scanf("%d",&x);
      int t=x;
      while(x!=0)
      {
          r=x%10;
          rev=rev*10+r;
          x=x/10;
      }
      if(t==rev)
      {
          c++;
      }
   }
   if(c==n)
   {
       printf("1");
   }
   else 
   {
       printf("0");
   }
      
}