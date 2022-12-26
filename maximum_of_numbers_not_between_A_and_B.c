# include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int p,q,f=1;
    scanf("%d%d",&p,&q);
    int max=a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]>p&&a[i]<q) 
        {
            c++;
        }
        else 
        {
           if(a[i]>max)
           {
               max=a[i];
               f=0;
           }
        }
    
    }
    if(f==0)
    {
        printf("%d",max);
    }
     if(f==1)
     {
         printf("-1");
     }
}