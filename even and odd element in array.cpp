#include<stdio.h>
int main()
{
	int i,j,n,arr[n];
	printf("enter the size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
		for(i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
	printf("\n");
	// even the odd element in array
	for(i=0;i<n;i++)
	{	
	if(arr[i]%2==0)
	{
		printf("even = %d ",arr[i]);
	}
	else
	{
		printf("odd = %d ",arr[i]);
	}
	}
}
