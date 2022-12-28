# include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if((a>=b && a<=c) || (b>=a && c<=a))
        {
            printf("%d
",a);
        }
        else if((b>=a && b<=c)||(b<=a && b>=c))
        {
            printf("%d
",b);
        }
        else
        {
            printf("%d
",c);
        }
    }
}