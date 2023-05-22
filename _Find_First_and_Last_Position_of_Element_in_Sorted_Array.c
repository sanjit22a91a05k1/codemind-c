#include<stdio.h>
int main()
{
	 int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	int k,res=-1,res1=-1;
	scanf("%d",&k);
	for(int i=0;i<n;i++)
	{
	    if(a[i]==k) 
	    {
	        res=i;
	        break;
	    }
	}
	for(int i=n;i>=0;i--)
	{
	    if(a[i]==k)
	    {
	        res1=i;
	        break;
	    }
	}
	printf("%d %d",res,res1);
}
