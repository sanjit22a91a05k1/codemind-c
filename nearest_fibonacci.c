// nearest fibonacci
# include<stdio.h>
int fib( int );
int main()
{
 int n,f,b;
 scanf("%d",&n);
 for(int i=n; ; i++)
 {
 	if(fib(i))
 	{
 		f=i;
 		break;
	 }
	 }	
	 for(int i=n; ; i--)
 {
 	if(fib(i))
 	{
 		b=i;
 		break;
	 }
	 }
	int  d1=f-n;
	int  d2=n-b;
	 if(d1>d2)
	 {
	 	printf("%d",b);
	 }
	 else if(d2>d1)
	 {
	 	printf("%d",f);
	 }
	 else if(d1==d2)
	 {
	 	printf("%d %d",b,f);
	 }
}
int fib(int n)
{
	int a,b,c;
	
	if(n==0 || n==1)
	{
	printf("%d",n);
	}
	else 
	{
		a=0;
		b=1; 
		c=a+b;
	}
	while(n>c)
	{
		a=b;
		b=c;
		c=a+b;
	}
	if(n==c)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}