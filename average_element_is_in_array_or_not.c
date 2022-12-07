# include<stdio.h>
int main()
{
    int n,sum=0,s=0,i;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
         scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        sum=sum+a[i];
    }
    int ave=sum/n;
  for(int i=0; i<n; i++)
  {
   if(a[i]==ave)
   {
       printf("True");
       return 0;
   }
  
  }
  printf("False");
}