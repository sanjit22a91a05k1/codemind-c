# include<stdio.h>
# include<string.h>
int main()
{
    char s[200];
    int c=0;
    scanf("%[^
]s",s);
    for(int i=0; s[i]!=NULL; i++)
    {
        int x=s[i]-'0';
        if(x>=0 && x<=9)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("Doesn't contain digit");
    }
    else 
    {
        printf("Contains %d digit",c);
    }
}