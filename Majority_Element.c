#include<stdio.h>
int majority(int *a, int n)
{
    int maj=a[0];
    int c=1;
    for(int i=1; i<n; i++)
    {
        if(maj==a[i])
        {
            c++;
        }
        else
        {
            c--;
            if(c==0)
            maj=a[i];
            c=1;
        }
    }
    return maj;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
   int res= majority(a,n);
   printf("%d",res);
}