# include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=n; j>=n-2; j--)
        {
            printf("%d ",j);
        }
        for(int k=n-3; k>=1; k--)
        {
            printf("%d ",k);
        }
        printf("
");
    }
}