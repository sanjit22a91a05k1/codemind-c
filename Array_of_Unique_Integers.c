# include<stdio.h>
int main()
{
	int n,c=0;
	float sum=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for( int i=0; i<n; i++)
	{
		for(int j=0; j<n-1; j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=1;i<n-1;i++)
	{
	    c++;
	sum=sum+a[i];
	}
	printf("%.5f",sum/c);
}