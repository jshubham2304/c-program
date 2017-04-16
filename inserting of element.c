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
// INSERTING AND INCREASE THE SIZE OF ARRAY
printf("\n");
printf("enter the  number which get insert");
scanf("%d",&num);
printf("\n");
printf("enter the position of number :- ");
scanf("%d",&position);
printf("\n");
for(i=n;i>=position-1;i--)
{
	arr[i]=arr[i-1];
}
arr[position-1] = num;
n++;
for(i=0;i<n;i++)
	{
		printf(" %d\t",arr[i]);
	}
}
