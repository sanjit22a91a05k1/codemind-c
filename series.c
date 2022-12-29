# include<stdio.h>
# include<math.h>
int main()
{
    int n,k=1,k1=1;
    scanf("%d",&n);
    for(int i=1; i<=n+1; i++)
    {
        if(i%2!=0)
        {
            int p=pow(2,k);
            
            printf("%d ",p-1);
            k++;
        }
        else if(i%2==0)
        {
            int a=pow(3,k1);
            printf("%d ",a-1);
            k1++;
        }
    }
}