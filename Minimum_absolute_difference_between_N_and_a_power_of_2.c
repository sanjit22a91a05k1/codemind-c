#include<stdio.h>
#include<math.h>
int powe(int n,int x)
{
int p=1;
for(int i=1; i<=x; i++)
{
    p=p*n;
}
return p;
}
int main()
{
    int n;
    scanf("%d",&n);
    int x=0;
    int i=0;
    while(x<=n)
    {
      x=powe(2,i);
      i++;
    }
    int b=x/2;
    int d1=x-n;
    int d2=n-b;
    if(d1>d2)
    {
        printf("%d",d2);
    }
    else
    {
        printf("%d",d1);
    }
}