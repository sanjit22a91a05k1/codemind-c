# include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(x<y)
        {
            printf("PROFIT
");
        }
        else if(y<x)
        {
            printf("LOSS
");
        }
        else if(x==y)
        {
            printf("NEUTRAL
");
        }
    }
}