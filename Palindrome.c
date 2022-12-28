# include<stdio.h>
int main()
{
    int n,rev=0,r;
    scanf("%d",&n);
    int t=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(t==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}