# include<stdio.h>
int main()
{
    char ch[60];
    scanf("%s",ch);
    int sum=0;
   for(int i=0; ch[i]!=NULL; i++)
   {
     if(ch[i]>='0' && ch[i]<='9')//checking numerical character
     {
          sum=sum+(ch[i]-'0'); //adding numerical character
     }
   }
   printf("%d",sum);
}