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
    float sum=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(prime(a[i]))
        {
            sum=sum+a[i];
            c++;
        }
    }
    float ave=sum/c;
    printf("%.2f",ave);
}