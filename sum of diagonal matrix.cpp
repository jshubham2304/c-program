
#include<stdio.h>
int main()

{
	int n=3,i=0,j=0;
	int a[n][n];
//	printf("enter the size of matrix");
	//scanf("%d",n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter the matrix value   :-");
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	int sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i == j)
			{	
			
			     sum = sum + a[i][j];
				
			}
		}
	}
	printf("\n");
	printf("%d",sum);
}
