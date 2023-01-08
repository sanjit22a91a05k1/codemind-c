# include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int x,sum=0;
    for(int i=0;s[i]!=NULL; i++)
    {
        x=s[i]-'0';
        if(x>=0 && x<=9)
        {
            sum=sum+x;
        }
    }
    printf("%d",sum);
}