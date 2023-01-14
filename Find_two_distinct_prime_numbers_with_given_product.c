# include<stdio.h>
int main()
{
    int n,c=1;
    scanf("%d",&n);
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            c=0;
        }
    }
    if(c==1)
    {
        printf("-1");
    }
}