# include<stdio.h>
# include<math.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int t=n-1;
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
      int p=pow(2,t);
      int q=a[i]*p;
      s=s+q;
      t--;
    }
     printf("%d ",s);
}