#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int f=1;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=0; i<n; i++)
    {
        int c=0;
        for(int j=0; j<n; j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==a[i])
        {
            printf("%d ",a[i]);
            f=0;
            for(int k=0; k<n; k++)
            {
                if(a[i]==a[k])
                {
                    a[k]=0;
                }
            }
        }
    }
    if(f==1)
    {
        printf("-1");
    }
}