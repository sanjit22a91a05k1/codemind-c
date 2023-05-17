#include<stdio.h>
int main()
{
    int n,f=1;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int count=0;
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
        if(a[i]==c)
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