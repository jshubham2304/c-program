#include<stdio.h>
int main()
{
	int i,num,n,a[n];
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
	printf("enter the number which u want to find");
	scanf("%d",&num);
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(num == a[i])
		{
			printf("no. is exist");
			printf("i = %d",i);
			break;
		}
		else
		{
			printf("no. is not exist");
		}
	}
}
