# include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],f=1;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        int c=0;
        for(int j=0; j<n; j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    c++;
                }
            }
        }
        if(c==0)
        {
            printf("%d ",a[i]);
            f=0;
        }
    }
    if(f==1)
    {
        printf("-1");
    }
}