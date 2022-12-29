# include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
while(n!=0)
{
    printf("%d ",n);
     if(n==1)
   {
       break;
   }
   else if(n%2==0)
   {
      n=n/2;
   }
   else if(n%2!=0)
   {
       n=3*n+1;
   }
  
}
}