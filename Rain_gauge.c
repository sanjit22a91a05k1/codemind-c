# include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        int x;
        scanf("%d",&x);
        if(x<3)
        {
            printf("LIGHT
");
        }
        else if(x>=3 && x<7)
        {
            printf("MODERATE
");
        }
        else if(x>=7)
        {
            printf("HEAVY
");
        }
    }
}