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
    int sum=0;
    for(int i=0; i<n; i++)
    {
       if(a[i]>=p && a[i]<=q)
       {
           sum=sum+a[i];
       }
    }
    printf("%d",sum);
}