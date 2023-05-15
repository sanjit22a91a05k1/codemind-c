#include<stdio.h>
int prime(int n)
{
int c=0;
for(int i=1; i<=n; i++)
{
if(n%i==0)
{
c++;
}
}
if(c==2)
{
return 1;
}
else
{
return 0;
}
}
int main()
{
int n;
scanf("%d",&n);
int t=n;
int rev=0;
while(prime(n)!=0)
{
int r=n%10;
rev=rev*10+r;
n=n/10;
}
if(prime(t)==0) 
{
printf("not prime");
}
else
{
if(prime(t)==prime(rev))
{
printf("circular prime");
}
else
{
printf("prime but not a circular prime");
}
}
}