# include<stdio.h>
int main()
{
    int r,c;
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
       int sum=0;
        for(int j=0; j<c; j++)
        {
         sum=sum+a[i][j];
        }
        printf("%d ",sum);
    }
    
}