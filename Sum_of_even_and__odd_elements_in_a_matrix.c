#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int a[r][c];
     int sum=0;
      int s=0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(a[i][j]%2==0)
            {
                sum=sum+a[i][j];
            }
            else
            {
                s=s+a[i][j];
            }
        }
    }
      printf("%d %d",sum,s);
    
}