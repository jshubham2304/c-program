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
	//  count even and odd element in array
	int even=0,odd=0;
	for(i=0;i<n;i++)
	{	
	if(arr[i]%2==0)
	{
		even++;
	}
	else
	{
		odd++;
	}
	}
		printf("even are = %d ",even);
			printf("odd are = %d ",odd);
}
