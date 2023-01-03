# include<stdio.h>
int main()
{
    int n;
    float sum=0,t=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        float c=0;
        for(int j=0; j<n; j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==a[i])
        {
           sum=sum+a[i]; 
           t++;
        
        for(int k=0; k<n; k++)
        {
            if(a[i]==a[k])
            {
                a[k]=-1;
            }
        }
    }
    }
    if(sum!=0)
    {
        printf("%.2f",(sum/t));
    }
    else 
    {
      printf("-1");  
    }
}