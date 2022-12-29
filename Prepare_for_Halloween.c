# include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(x*2 >y*5)
        {
            printf("Chocolate
");
        }
        else if(x*2==y*5)
        {
            printf("Either
");
        }
        else 
        {
            printf("Candy
");
        }
    }
}