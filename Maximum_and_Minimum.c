#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int a[n];
int b[n];
int k=0;
for(int i=0; i<n; i++)
{
    scanf("%d",&a[i]);
}
for(int i=0; i<n; i++)
{
    int c=1;
    for(int j=i+1; j<n; j++)
    {
        if(a[i]==a[j])
        {
            c++;
        }
    }
    if(a[i]==c)
    {
       b[k++]=a[i]; 
    }
}
if(k!=0)
{
    int max=a[0];
    int min=a[0];
    for(int i=0; i<k; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        else
        {
            min=a[i];
        }
    }
    printf("%d %d",min,max);
}
else
{
    printf("-1");
}
}
