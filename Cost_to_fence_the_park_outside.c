#include<stdio.h>
int main()
{
    int l,b,w,c,tc;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    int ai=l*b;
    int ao=(2*w+l)*(2*w+b);
    int as=ao-ai;
    tc=as*c;
    printf("%d",tc);
}