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
	int max1,max2;
	max1=arr[0];
	max2=arr[0];
	for(i=0;i<n;i++);
	{
		if(arr[i] > max1)
		{
			max2=max1;
			max1=arr[i];
		
		}
		else if(arr[i] > max2)
		{
			max2=arr[i];			
		}
	}
	printf("second largest no=%d",max2);
	
}
