# include<stdio.h>
# include<math.h>
int main()
{
    int n,k=1,k1=0;
    scanf("%d",&n);
    for(int i=1; i<=n+1; i++)
    {
        if(i%2!=0)
        {
          int p=pow(2,k);  
          printf("%d ",p);
          k++;
        }
        
        else if(i%2==0)
        {
            if(i==2)
            {
                printf("0 ");
            }
            else
            {
            int q=pow(3,k1);
            printf("%d ",q);
            k1++;
            }
            
        }
    }
}