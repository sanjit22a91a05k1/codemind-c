# include<stdio.h>
# include<string.h>
int main()
{
    char s[100];
    int vc=0,count=0,dc=0,wc=0;
    scanf("%[^
]s",s);
    for(int i=0; s[i]!=NULL; i++)
    {
       int x=s[i]-'0';
        if(s[i]=='A'||s[i]=='a' || s[i]=='E' || s[i]=='e'|| s[i]=='I'|| s[i]=='i'|| s[i]=='O'||s[i]=='o' || s[i]=='U'||s[i]=='u')
    {
        vc++;
    }
else if((s[i]>='A'|| s[i]>='a')&&(s[i]<='Z'||s[i]<='z'))
{
    count++;
}
else if(x>=0 && x<=9)
{
    dc++;
}
else if(s[i]==' ')
{
    wc++;
}
    }
    printf("Vowels: %d
",vc);
    printf("Consonants: %d
",count);
    printf("Digits: %d
",dc);
    printf("White spaces: %d",wc);
}