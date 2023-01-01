# include<stdio.h>
# include<string.h>
int main()
{
    char s[1000];
   
    int c=0;
    scanf("%s",s);
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]=='1')
        {
            c++;
        }
    }
    printf("%d",c);
}
