# include<stdio.h>
int main()
{
    int r,c;
   int sum=0;
    scanf("%d%d",&r,&c);
    int a[r][c];
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
            sum=sum+a[i][j];
        }
    }
    for(int i=1; i<r-1; i++)
    {
        for(int j=1; j<c-1; j++)
        {
            sum=sum-a[i][j];
        }
    }
 printf("%d",sum);
}