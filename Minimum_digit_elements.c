#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int count=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
     int min_digit=11;
    for(int i=0; i<n; i++)
    {
        int c=0;
        int t=a[i];
        while(t!=0)
        {
            int r=t%10;
            c++;
            t=t/10;
        }
        if(c<min_digit)
        {
            min_digit=c;
            count=1;
        }
        else if(c==min_digit)
        {
           count++; 
        }
        
    }
    printf("%d",count);
    
}