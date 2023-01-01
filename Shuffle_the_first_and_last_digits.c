# include<stdio.h>
# include<math.h>
int main()
{
    int n,rem,c=0;
    scanf("%d",&n);
    int t=n;
    while(n!=0)
    {
        rem=n%10;
        c++;
        n=n/10;
    }
    int r=t%10;
    int p=pow(10,c-1);
    int a=t/p;
    int b=a*p+r;
   int d=t-b;
   int e=r*p+d+a;
   printf("%d",e);
    
}