# include<stdio.h>
# include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        int x,c=0;
        scanf("%d",&x);
        int t=x;
        while(x!=0)
        {
            int r=x%10;
            c++;
            x=x/10;
        }
        int p=pow(10,c-1);
         int b=t%10;
        int a=t/p;
        printf("%d
",abs(a+b));
    }
}