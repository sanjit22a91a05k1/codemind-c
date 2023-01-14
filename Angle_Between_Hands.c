# include<stdio.h>
# include<math.h>
int main()
{
    int h,m;
    scanf("%d:%d",&h,&m);
    float x=30*h+0.5*m;
    float y=6*m;
    float angle=abs(x-y);
    if(angle>180)
    {
        angle=360-angle;
    }
    printf("%.1f",angle);
}