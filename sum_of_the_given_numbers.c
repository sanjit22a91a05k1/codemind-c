# include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        int a,b,s;
        scanf("%d%d",&a,&b);
        s=a+b;
        printf("%d
",s);
    }
}