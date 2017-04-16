#include<stdio.h>
int main()
{
	int i,j,n,a[n],b[n],temp;
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
	j=0;
	for(i=n-1;i>=0;i--)
	{
	b[j]=a[i];
	j++;
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf(" %d",b[i]);
	}
	printf("\n");
}
