#include<stdio.h>
int count(int t)
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
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        int cnt=count(a[i]);
        printf("%d ",cnt);
    }
}