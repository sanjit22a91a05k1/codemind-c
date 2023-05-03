#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
   int sum=0;
  int   pro=1;
    while(n!=0)
    {
        int r=n%10;
        sum+=r;
        pro*=r;
        n=n/10;
    }
    if(sum==pro)
    {
        printf("Spy Number");
    }
    else 
    {
        printf("Not Spy Number");
    }
}