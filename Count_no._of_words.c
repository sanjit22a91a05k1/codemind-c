#include <stdio.h>
#include <string.h>
 
int  main()
{
    char s[200];
    int c=0;
    scanf("%[^
]s", s);
   for(int  i=0; s[i]!=NULL;i++)
    {
        if(s[i]==' ' && s[i+1]!=' ')
        {
            c++;
        }
    }
    printf("%d",c+1);
}