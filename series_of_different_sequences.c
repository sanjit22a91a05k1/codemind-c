# include<stdio.h>
# include<math.h>
int main()
{
    int n,k=0,k2=-2;
    scanf("%d",&n);
    for(int i=1; i<=n+1;i++)
    {
        if(i%2!=0)
        {
            int p=pow(3,k);
            printf("%d ",p+2);
            k++;
        }
        else if(i%2==0)
        {
            printf("%d ",k2);
           int p=5*k2+12;
          k2=p;
        }
    }
}