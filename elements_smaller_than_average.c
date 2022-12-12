# include<stdio.h>
int main()
{
    int n,s=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        s=s+a[i];
    }
   int ave=s/n;
   for(int i=0; i<n; i++)
   {
       if(a[i]<=ave)
       {
           c++;
       }
   }
   printf("%d",c);
}