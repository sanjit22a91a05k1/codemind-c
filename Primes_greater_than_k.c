#include<stdio.h>
int prime(int n)
{
    int c=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int c=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0; i<n; i++)
    {
        if(prime(a[i]))
        {
            if(a[i]>=k)
            {
                c++;
            }
        }
    }
    printf("%d",c);
}