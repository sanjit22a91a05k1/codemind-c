# include<stdio.h>
int main()
{
    int c=0,count=0;
    int a[3];
    int b[3];
    for(int i=0; i<3; i++ )
    {
        scanf("%d",&a[i]);
    }
     for(int i=0; i<3; i++ )
    {
        scanf("%d",&b[i]);
    }
    for(int i=0; i<3; i++)
    {
       if(a[i]<b[i])
       {
           c++;
       }
       else if(a[i]>b[i])
       count++;
    }
    printf("%d %d",count,c);
}