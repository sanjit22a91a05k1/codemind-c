# include<stdio.h>
int main()
{
    float u,a,s;
    scanf("%f",&u);
    if(u<199)
    {
        a=u*1.20;
        if(a>400)
        {
            s=0.15*a;
            printf("%.2f",s+a);
        }
        else
        {
            printf("%.2f",a+100);
        }
    }
    if(u>=200 && u<400)
    {
        a=u*1.50;
        if(a>400)
        {
            s=0.15*a;
            printf("%.2f",s+a);
        }
        else
        {
            printf("%.2f",a+100);
        }
    }
    if(u>=400 && u<600)
    {
        a=u*1.80;
        if(a>400)
        {
            s=0.15*a;
            printf("%.2f",s+a);
        }
        else
        {
            printf("%.2f",a+100);
        }
    }
    if(u>=600)
    {
        a=u*2.00;
        if(a>400)
        {
            s=0.15*a;
            printf("%.2f",s+a);
        }
        else
        {
            printf("%.2f",a+100);
        }
    }
}