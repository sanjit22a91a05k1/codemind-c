# include<stdio.h>
# include<string.h>
int main()
{
     char s[200];
     int c=1;
     scanf("%[^
]s",s);
     for(int i=1; s[i]!=NULL; i++)
     {
         if(s[i]>='A' && s[i]<='Z')
         {
             c++;
         }
     }
     printf("%d",c);
}