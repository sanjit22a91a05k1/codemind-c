# include<stdio.h>
int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    for(int i=n1; i<=n2; i++)
    {
        int rev=0,r;
        int t=i;
        while(t!=0)
        {
            r=t%10;
            rev=rev*10+r;
            t=t/10;
        }
        if(rev==i)
        {
            printf("%d ",i);
        }
    }
}