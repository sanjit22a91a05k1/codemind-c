# include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==j || j==n+1-i)
            {
                printf("%d ",i);
            }
            else
            {
                printf(" ");
            }
        }
        printf("
");
    }
}