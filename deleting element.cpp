#include<stdio.h>
int main()
{
// ARRAY FORMATION
	int i,j,n,arr[n],position,num;
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
// deleting  THE element  OF ARRAY

printf("\n");
printf("enter the position of number :- ");
scanf("%d",&position);
printf("\n");
for(i=position-1;i<n-1;i++)
{
	arr[i]=arr[i+1];
	
}

n--;
for(i=0;i<n;i++)
	{
		printf(" %d\t",arr[i]);
	}
}
