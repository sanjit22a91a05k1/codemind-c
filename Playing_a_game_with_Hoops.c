# include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        int x;
        scanf("%d",&x);
        if(x%2==0)
        {
            printf("%d
",x/2);
        }
        else 
        {
            printf("%d
",x/2+1);
        }
    }
}