# include<stdio.h>
int main()
{
    char s[1000000];
    int l=0,f=0;
    scanf("%s",s);
    for(int i=0; s[i]!=NULL;i++)
    {
        l++;
    }
    for(int i=0,j=l-1;i<j; i++,j--)
    {
        if(s[i]!=s[j])
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("Not Palindrome");
    }
    else
    {
        printf("Palindrome");
    }
}