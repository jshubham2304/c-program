#include<stdio.h>
int main()
{
	int i,n,m,a[n],b[m],c[100];
	printf("enter the size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
	printf("\n");
	printf("enter the size");
	scanf("%d",&m);
	printf("other array");
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
		for(i=0;i<m;i++)
	{
		printf(" %d",b[i]);
	}
	printf("\n");
	//merge of two array
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for(i=0;i<m;i++)
	{
		c[i+n]=b[i];
	}
	for(i=0;i<n+m;i++)
	{
		printf("  %d  ",c[i]);
	}
	
}
