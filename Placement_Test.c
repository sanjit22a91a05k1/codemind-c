#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int x,n;
        scanf("%d%d",&x,&n);
        int a=x*n;
        int b=a/10;
        printf("%d
",b);
    }
}