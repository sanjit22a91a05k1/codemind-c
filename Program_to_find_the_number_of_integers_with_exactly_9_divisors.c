# include<stdio.h>
int div(int);
int main()
{
    int n,count=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
         if(div(i)==9)
            {
                count++;
               printf("%d ",i);
            }
        }
    
    printf("
Total=%d",count);
}
int div(int n)
{
    int c=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    return c;
}