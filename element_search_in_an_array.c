// search of an array
# include<stdio.h>
int main()
{
	int n;
	int c=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n; i++)
  {
	int p;
	scanf("%d",&p);
	if(p==a[i])
	{
		c++;
	}
}
	if(c==0)
	{
	printf("False");	
	}
	else
	{
  printf("True");
}
}