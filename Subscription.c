# include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        int x;
        scanf("%d",&x);
        if(x>30)
        {
            printf("YES
");
        }
        else 
        {
            printf("NO
");
        }
    }
}