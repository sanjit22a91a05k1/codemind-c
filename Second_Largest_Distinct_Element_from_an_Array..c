# include<stdio.h>
int main()
{
    int n;
     int max1=0;
    int max2=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
     max1=a[0];
     max2=a[1];
    for(int i=0; i<n; i++)
    {
        if(max1<a[i])
        {
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2 && a[i]<max1)
        {
            max2=a[i];
        }
    }
    printf("%d",max2);
}