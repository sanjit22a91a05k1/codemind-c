# include<stdio.h>
int main()
{
    int n,r,rev=0;
    scanf("%d",&n);
    int a=n%1000;
    int b=n/1000;
    while(a!=0)
    {
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    int c=b*1000+rev;
    printf("%d",c);
    
}